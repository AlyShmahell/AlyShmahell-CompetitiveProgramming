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
    char str[1000001];
    gets(str);
    int alphabet[26];
    for(int i=0; i<26; i++)
    {
        alphabet[i]=0;
    }

    for(int i=0; i<strlen(str); i++)
    {
            for(int j=0; j<(int)(str[i]-'a'); j++)
            {
                alphabet[j]=0;
            }
            alphabet[(int)(str[i]-'a')]++;
    }


    for(int i=25; i>=0; i--)
    {
        for(int j=0; j<alphabet[i]; j++)
        {
            cout<<(char) (i+(int) 'a');
        }
    }
}
