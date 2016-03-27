#include <bits/stdc++.h>
using namespace std;
int counter;
string queen;
pair <int,int> queens[8];
bool place(int row,int col)
{
    for(int j=0; j<counter; j++)
        if(queens[j].first==row||queens[j].second==col||abs(queens[j].first-row)==abs(queens[j].second-col))
            return false;

    return true;
}
int main()
{
    long long int t;

    cin>>t;
    while(t--)
    {
        for(int k=0; k<8; k++)
        {
            cin>>queen;
            queens[k].first=(int) queen[0]-'A'+1;
            queens[k].second=(int) queen[1]-'0';
        }

        bool flag=1;
        for( counter=1; counter<8; counter++)
            if(!place(queens[counter].first,queens[counter].second))
                {
                 flag=0;
                 cout<<"Invalid"<<endl;
                 break;
                }
        if(flag)
            cout<<"Valid"<<endl;
    }

}
