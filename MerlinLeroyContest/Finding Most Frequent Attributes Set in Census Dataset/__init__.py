#!/bin/python3

import math
import os
import random
import re
import sys



#
# Complete the 'attributesSet' function below.
#
# The function is expected to return a STRING_ARRAY.
# The function accepts following parameters:
#  1. INTEGER numberOfAttributes
#  2. FLOAT supportThreshold
#

import pandas as pd
import numpy as np
import itertools
from copy import copy 

def attributesSet(numberOfAttributes, supportThreshold):
    df = pd.read_csv(
            'census.csv',
            names = [
                "age",
                "sex",
                "education",
                "native-country",
                "race",
                "marital-status",
                "workclass",
                "occupation",
                "hours-per-week",
                "income",
                "capital-gain",
                "capital-loss",
            ]
        )
    size = df.shape[0]
    possibilities = [
        [value, frequency/size, column]
        for column in df.columns
        for value, frequency in zip(*list(np.unique(df[column], return_counts=True)))
        if frequency/size >= supportThreshold
    ]
    combinations = [*itertools.combinations(possibilities, numberOfAttributes)]
    result = []
    for combination in combinations:
        probabilities = [pair[1] for pair in combination]
        probprod = np.prod(probabilities)
        if supportThreshold - probprod > 0.05:
            continue
        columns = [pair[2] for pair in combination]
        values  = [pair[0] for pair in combination]
        partial = copy(df[columns])
        for column, value in zip(columns, values):
            partial = partial[partial[column] == value]
        if partial.shape[0]/size >= supportThreshold:
            result.append(",".join(values))
    return result