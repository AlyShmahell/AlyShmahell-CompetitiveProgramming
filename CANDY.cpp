/*
Copyright (c) 2013-2016 Aly Shmahell

 This software is provided 'as-is', without any express or implied warranty. 
 In no event will the authors be held liable for any damages arising from
 the use of this software.

    Permission is granted to anyone to use this software for any purpose,
    including commercial applications, and to alter it and redistribute it
    freely, subject to the following restrictions:

    1. The origin of this software must not be misrepresented; you must not
       claim that you wrote the original software. If you use this software
       in a product, an acknowledgement in the product documentation is required.
    2. Altered source versions must be plainly marked as such, and must not be
       misrepresented as being the original software.
    3. This notice may not be removed or altered from any source distribution.
*/

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
