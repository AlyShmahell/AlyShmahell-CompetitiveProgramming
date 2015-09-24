/*
Copyright 2013-2015 ALY SHMAHELL

 This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
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
