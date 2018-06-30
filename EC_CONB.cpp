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

#include <iostream>
#include <math.h>
#include <stack>
using namespace std;

stack <long long int> a;

long long int bin(long long int x)
{
    while (x!=0)
    {
        a.push(x%2);
        x/=2;
    }

    x=0;
    long long int i=0;
    while(!a.empty())
    {
        x+=a.top()*pow(2,i);
        a.pop();
        i++;
    }
    return x;
}

int main()
{
    int n;
    long long int x;
    cin>>n;
    while (n--)
    {
        cin>>x;
        if(x%2==0)
        {
            cout<<bin(x);
        }
        else
            cout<<x;
        if (n>=1)
            cout<<endl;
    }
}
