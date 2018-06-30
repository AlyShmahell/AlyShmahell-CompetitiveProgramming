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
#include<cstdio>
#include<string.h>
#include<stdlib.h>
using namespace std;

char k[1000100];
void next_Palin()
{
    int flag=1;
    int Array_Length,ODD_EVEN_FACTOR,i,Range;
    Array_Length=strlen(k);
    for(i=0;i<Array_Length;i++)
        if(k[i]!='9')
        {
        flag=0;
        break;
        }
    if(flag==1)
    {
        k[0]='1';
        for(i=1;i<Array_Length;i++)
            k[i]='0';
            k[Array_Length]='1';
            k[Array_Length+1]='\0';
        return;
    }
    flag=0;
    if(Array_Length%2==0)
        ODD_EVEN_FACTOR=Array_Length/2-1;
    else
        ODD_EVEN_FACTOR=Array_Length/2;
    for(i=0;i<Array_Length/2;i++)
    {
        if (k[i]<k[Array_Length-i-1])
            flag=1;
            else if (k[i]>k[Array_Length-i-1])
                flag=2;
        k[Array_Length-i-1]=k[i];
    }
    if(flag==0||flag==1)
    {
        Range=0;
        while(k[ODD_EVEN_FACTOR-Range]=='9')
        {
            k[ODD_EVEN_FACTOR-Range]='0';
            k[Array_Length-1-ODD_EVEN_FACTOR+Range]='0';
            Range++;
        }
        k[ODD_EVEN_FACTOR-Range]++;
        k[Array_Length-1-ODD_EVEN_FACTOR+Range]=k[ODD_EVEN_FACTOR-Range];

    }
return;
}
int main()
{
    int t;
    scanf("%d\n",&t);
    for(int i=0; i<t; i++)
    {
        gets(k);
        next_Palin();
        printf("%s\n",k);
    }
    return 0;
}
