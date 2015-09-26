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
#include<string>
using namespace std;
int main()
{
    int n,number,minimum,maximum;
    cin>>n;
    char answer;
    string question;
    minimum=-2*1000000000;
    maximum=2*1000000000;
    for(int i=0; i<n; i++)
    {
        cin>>question>>number>>answer;

        if(question==">"&&answer=='Y')
        {
            if(number>=minimum)
            minimum=++number;

            }
        if(question==">"&&answer=='N')
        {
           if(number<=maximum)
           maximum=number;
        }
        if(question=="<"&&answer=='Y')
        {
            if(number<=maximum)
            maximum=--number;
        }
        if(question=="<"&&answer=='N')
        {
           if(number>=minimum)
           minimum=number;
        }
        if(question==">="&&answer=='Y')
        {
           if(number>=minimum)
           minimum=number;
        }
        if(question==">="&&answer=='N')
        {
            if(number<=maximum)
            maximum=--number;
        }
        if(question=="<="&&answer=='Y')
        {
         if(number<=maximum)
         maximum=number;
        }
        if(question=="<="&&answer=='N')
        {
          if(number>=minimum)
          minimum=++number;
        }
    }
    if(minimum>maximum)
    {
    cout<<"Impossible";
    return 0;
    }
    else
    {
    cout<<minimum;
    return 0;
    }

}
