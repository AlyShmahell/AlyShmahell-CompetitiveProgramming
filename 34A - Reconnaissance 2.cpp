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
