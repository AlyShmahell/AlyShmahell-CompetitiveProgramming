#include<iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
    long long int a,input[10001],i,j,temp=0,counter=0;
    while(cin>>a)
    {
        temp=0,counter=0;

        if(a==-1)
          break;

        for(i=1;i<=a;i++)
            {cin>>input[i];
            temp+=input[i];}

            sort(input,input+a);

            if(temp%a==0)
                        {
                             for(j=1;j<=a;j++)
                                   if(input[j]>((temp/a)))
                                   {
                                      counter+=(input[j]-(temp/a));
                                   }
                                   cout<<counter<<endl;
                          }
                    else

                        cout<<-1<<endl;

                        }

}
