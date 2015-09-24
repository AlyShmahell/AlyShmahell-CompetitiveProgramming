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
#include<string.h>
#include<stdlib.h>
#include<iostream>
char k[500];
void transform_expression()
{
    int visited[500]={false};
    int length = strlen(k);
    char temp; int i,j,counter;
    for(i=0;i<length-1;i++)
    {
        if((k[i]=='+'||k[i]=='-'||k[i]=='*'||k[i]=='/'||k[i]=='^')&&visited[i]==false)
        {
            temp=k[i];
            if(k[i+1]!='(')
            {
                k[i]=k[i+1];
                k[i+1]=temp;
                visited[i+1]=true;
            }
            else
            {
                counter=1;
                j=i+2;
                while(counter!=0)
                {
                 if(k[j]=='(')
                        counter++;
                 else if(k[j]==')')
                    counter--;
                 j++;
                }
                k[i]=k[j];
                k[j]=temp;
                visited[j]=true;
            }
        }
    }
    k[length+1]='\0';
    return;
}
int main()
{   int t,i;
    std::cin>>t;
    std::cin.ignore();
    while(t--)
    {
        gets(k);
        transform_expression();
        i=0;
        while(k[i]!='\0')
        {
            if((k[i]!='(')&&(k[i]!=')'))
                printf("%c",k[i]);
                i++;
        }
        if(t)
            printf("\n");
    }
}
