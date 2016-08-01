#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    float a,b;
    int n;
    scanf("%f%f%d",&a,&b,&n);
    float interest=0;
    float result = a;
    for(int i=0;i<n;i++)
    {
     interest=result*b;
     result+=interest;
    }
    printf("%.2f", result);
}
