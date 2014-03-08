#include <stdio.h>
using namespace std;

int a[3][21];
int minimum(int j,int k)
{
    if(j<=k) return j;
    else
        return k;

}

int main()
{
    int t,i,j,z;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&z);
        for(j=0;j<z;j++)
            for(i=0;i<3;i++)
            scanf("%d",&a[i][j]);
       for (j=1;j<z;j++)
       {
            a[0][j]+=minimum(a[1][j-1],a[2][j-1]);
            a[1][j]+=minimum(a[0][j-1],a[2][j-1]);
            a[2][j]+=minimum(a[1][j-1],a[0][j-1]);
       }
          printf("%d",minimum(a[0][z-1],minimum(a[1][z-1],a[2][z-1])));
          if(t) printf("\n");
    }
}
