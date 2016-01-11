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
    char guest[101];
    char host[101];
    char pile[101];
    int first[26];
    int second[26];
    bool beacon=1;
    for(int l=0; l<26; l++)
    {
        first[l]=0;
        second[l]=0;
    }
    int i,j,k;
    gets(guest);
    gets(host);
    gets(pile);
    for(int i = 0; i < strlen(guest); i++)
        first[(int)guest[i]-'A']++;
    for(int i = 0; i < strlen(host); i++)
        first[(int)host[i]-'A']++;
    for(int i = 0; i < strlen(pile); i++)
        second[(int)pile[i]-'A']++;
    for(int l=0; l<26; l++)
        if(first[l]!=second[l])
        {
            beacon=0;
            cout<<"NO";
            break;
        }
        if(beacon==1)
            cout<<"YES";
}
