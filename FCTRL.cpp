#include <stdio.h>
using namespace std;

int main()
{
    int t,a,k;
    scanf("%d",&t);
    while(t--)
    {
        k=0;
        scanf("%d",&a);
        while(a)
        {
            a/=5;
            k+=a;

        }
        printf("%d",k);
        if(t) printf("\n");
    }
}
