/*
Copyright 2016 ALY SHMAHELL

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

// Not Complete

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    int beacon=0;
    int num=0;
    char a[100001];
    char b[100001];
    int a_quan[2];
    int b_quan[2];
    gets(a);
    gets(b);
    for(int i=0; i<strlen(a); i++)
    {
        if(a[i]=='7')
            a_quan[1]++;
        else if(a[i]=='4')
            a_quan[0]++;
        if(b[i]=='7')
            b_quan[1]++;
        else if(b[i]=='4')
            b_quan[0]++;
    }
    for(int i=0; i<strlen(a); i++)
    {
        if(a[i]!=b[i])
            beacon++;
    }
    while(a_quan[0]>b_quan[0])
    {
        num++;
        beacon--;

        a_quan[0]--;
        a_quan[1]++;

    }
    while(a_quan[0]<b_quan[0])
    {
        num++;
        beacon--;

        a_quan[0]++;
        a_quan[1]--;
    }
    while(a_quan[0]==b_quan[0]&&beacon>0)
    {
        num++;
        beacon-=2;
    }
    if(beacon>=0)
        num+=beacon;

    cout<<num;
}
