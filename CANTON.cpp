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

