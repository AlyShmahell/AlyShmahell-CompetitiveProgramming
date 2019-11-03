import pprint
import numpy as np
import pandas as pd
from scipy import stats
from sklearn import linear_model
from sklearn.model_selection import KFold

if __name__ == '__main__':
        std_dev = 3
        training_set_df = pd.read_csv(
            'train.csv',
            names = range(501)
        ).dropna()
        training_set_df = training_set_df[
            (np.abs(stats.zscore(training_set_df)) < float(std_dev)).all(axis=1)
            ]
        training_set = training_set_df.to_numpy()

        testing_set_df = pd.read_csv(
            'test.csv',
            names = range(500)
        )
        testing_set = testing_set_df.to_numpy()

        x_train, y_train = training_set[:, :-1], training_set[:, -1]
        x_test = testing_set

        clf = linear_model.LinearRegression(n_jobs=-1)
        scores = []
        kfold = KFold(n_splits=3, shuffle=True, random_state=np.random.RandomState())
        for i, (train, test) in enumerate(kfold.split(x_train, y_train)):
            clf.fit(x_train[train], y_train[train])
            score = clf.score(x_train[test], y_train[test])
            scores.append(score)
        print(f"training scores 3-fold: {scores}")

        clf.fit(x_train, y_train)
        result = clf.predict(x_test)
        rand_domain = [np.random.randint(0, len(x_train)) for _ in range(10)]
        prediction = clf.predict(x_train[rand_domain, :])
        sample_prediction_error = np.absolute(y_train[rand_domain] - prediction)/y_train[rand_domain]
        print("sample_prediction_error:")
        pprint.pprint(sample_prediction_error.tolist())
        np.savetxt("prediction.csv", result, delimiter=",")