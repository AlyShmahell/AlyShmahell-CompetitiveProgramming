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

