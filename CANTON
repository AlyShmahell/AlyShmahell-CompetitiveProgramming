#include<stdio.h>
#include<iostream>
using namespace std;
typedef pair<int,int> ii;

int i =1, j = 2,counter,flag=0;
ii m[10000007];

int main()
{
    m[1].first=1;
    m[1].second=1;
    counter=2;
    while(counter<10000007)
    {

        if(flag==0)
        {
            if(j==1)
            {
                m[counter].first=i;
                m[counter].second=j;
                counter++;
                flag=1;
                i++;
            }
            else
            {
                m[counter].first=i;
                m[counter].second=j;
                i++;
                j--;
                counter++;
            }

        }
        else
        {
            if(i==1)
            {
                m[counter].first=i;
                m[counter].second=j;
                counter++;
                flag=0;
                j++;
            }
            else
            {
                m[counter].first=i;
                m[counter].second=j;
                i--;
                j++;
                counter++;
            }

        }

    }

    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("%s%d%s%d%c%d","TERM ",n," IS ",m[n].first,'/',m[n].second);
        if(t)
            printf("\n");
    }
}

