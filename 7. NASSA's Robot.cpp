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

int minimum[2];
int maximum[2];
char coordinates[100010];

void estimate_func()
{
    minimum[0]=minimum[1]=0;
    maximum[0]=maximum[1]=0;
    int counter=0;

    while(coordinates[counter]!='\0')
    {
        if(coordinates[counter]=='U')
        {
            minimum[1]++;
            maximum[1]++;
        }
         if(coordinates[counter]=='D')
        {
            minimum[1]--;
            maximum[1]--;
        }
         if(coordinates[counter]=='R')
        {
            minimum[0]++;
            maximum[0]++;
        }
         if(coordinates[counter]=='L')
        {
            minimum[0]--;
            maximum[0]--;
        }
         if(coordinates[counter]=='?')
        {
            minimum[0]--;
            maximum[0]++;
            minimum[1]--;
            maximum[1]++;

        }
        counter++;
    }
}
void print_results()
{
    printf("%d %d %d %d",minimum[0],minimum[1],maximum[0],maximum[1]);
}
int main()
{
    int test_cases;
    char input;
    cin>>test_cases;
    cin.ignore();
    while(test_cases--)
    {
        gets(coordinates);
        estimate_func();
        print_results();
        if(test_cases)
            printf("\n");
    }
}
