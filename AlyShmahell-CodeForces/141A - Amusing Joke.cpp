/*
Copyright (c) 2016 Aly Shmahell

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
