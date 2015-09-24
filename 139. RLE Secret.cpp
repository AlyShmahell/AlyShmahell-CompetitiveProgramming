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
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
char upper[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char sentence[1000000];
int counter[26];
void encode()
{ int counter=1;
    int length = strlen(sentence);
    for(int i=0;i<length;i++)
    {

       if(sentence[i]==sentence[i+1])
        counter++;
        else
       {

           printf("%c%d",sentence[i], counter);
           counter=1;
       }
    }
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        gets(sentence);
        encode();
        if(t) printf("\n");
    }
}
