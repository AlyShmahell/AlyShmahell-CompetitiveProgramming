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
#include <iostream>
using namespace std;

int test(int a, int b)
{
    if(a>b)
        return a-b;
    else
        return b-a;
}

int main()
{
    int number, priority,index,index_2;
    int objects[1000];
    cin>>number;
    for(int i = 0; i<number; i++)
    {
        cin>>objects[i];
        if(objects[i]>priority)
            priority = objects[i];
    }
    for(int i = 0; i<number; i++)
    {
        if(i==number-1)
        {
            if(priority>test(objects[i],objects[0]))
            {
                priority=test(objects[i],objects[0]);
                index = i;
                index_2=0;
            }
        }
        else if(priority>test(objects[i],objects[i+1]))
        {
            priority=test(objects[i],objects[i+1]);
            index = i;
            index_2=i+1;
        }
    }
    cout<<index+1<<" "<<index_2+1;
}
