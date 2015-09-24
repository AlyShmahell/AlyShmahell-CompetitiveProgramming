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
