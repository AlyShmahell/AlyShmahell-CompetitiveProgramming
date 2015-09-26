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
using namespace std;
int main()
{
    int n,temp,counter,result;
    cin>>n;
    int numbers[n];
    for(int i=0; i<n; i++)
        cin>>numbers[i];
    counter=0;
    while(counter<n)
    {
     for(int i=0;i<n;i++)
     {
     if(numbers[counter]>numbers[i])
     {
     numbers[counter]-=numbers[i];
     i--;
     }
     else if(numbers[counter]<numbers[i])
     {
     numbers[i]-=numbers[counter];
     i--;
     }

     }
     counter++;
    }
cout<<n*numbers[1];
}
