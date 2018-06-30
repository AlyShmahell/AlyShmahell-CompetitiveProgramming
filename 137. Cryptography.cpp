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
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
char lower[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char upper[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char sentence[1000000];
void encode(int n)
{
    int length = strlen(sentence);
    for(int i=0;i<length;i++)
    {
        if(sentence[i]==lower[sentence[i]-'a'])
        {
            //cout<<sentence[i]-'a';
            sentence[i]=(upper[(sentence[i]-'a'+n)%26]);
            //cout<<sentence[i];
        }
        else if(sentence[i]==upper[sentence[i]-'A'])
        {
            sentence[i]=(lower[(sentence[i]-'A'+n)%26]);
        }
        else if(sentence[i]==' ')
            continue;
    }
    sentence[length+1]='\0';
    return;
}
void print()
{
    int i=0;
    while(sentence[i]!='\0')
    {
      printf("%c",sentence[i]);
      i++;
    }
    return;
}
int main()
{
    int t,m,n;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        cin>>m>>n;
        cin.ignore();
        gets(sentence);
        encode(n);
        print();
        if(t) printf("\n");
    }
}
