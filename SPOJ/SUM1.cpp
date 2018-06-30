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
#include<cmath>
using namespace std;

unsigned long long int  counter(unsigned long long int i)
{
    return (i*(i+1)/2);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unsigned long long int a,b,c,d;

        cin>>a;
        b=ceil((double)a/3.00)-1;
        c=ceil((double)a/5.00)-1;
        d=ceil((double)a/15.00)-1;


        cout<<3*counter(b)+5*counter(c)-15*counter(d)<<endl;
    }
}
