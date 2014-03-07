#include<fstream>
#include<cmath>
using namespace std;
int poww(int b)
{  int c=1;
    while(b--)
        c*=10;
        return c;
}
int converter(int a)
{
    int b,j;
     j=(int)log10(a);
        b=0;
        while(a)
        {
              b+=((a%10)*poww(j));
              a/=10;
              j--;
        }
return b;

}
int main()
{
    int t,a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&a);
        scanf("%d",&b);
      printf("%d",converter(converter(a)+converter(b)));
       if(t) printf("\n");
    }
}
