#include <stdio.h>
#include <string.h>

int main()
{
    int year;
    scanf("%d",&year);
    if( (year%400==0 || year%100!=0) &&(year%4==0))
        printf("Leap Year");
    else
        printf("Not Leap Year");

}
