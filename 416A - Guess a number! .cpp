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
