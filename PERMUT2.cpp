#include<stdio.h>
#include<new>
#include<string>
using namespace std;
#define maximum 100001
typedef pair<int,int> ii;
ii *x = new ii[maximum];

int main()
{
    int n;
    while(scanf("%d",&n)&&n!=0)
    {
        bool flag = true;

        for(int i=1; i<=n; i++)
        {
            scanf("%d",&x[i].first);
            x[i].second=i;

        }
        for(int i=1; i<=n; i++)
        {

        if(x[i].first!=x[i].second)
        {
           if(x[x[i].first].first!=x[i].second)
            {
                flag=false;
                break;
            }

        }
        }
        if(flag==true)
            printf("%s","ambiguous\n");
        else
            printf("%s","not ambiguous\n");
    }
}
