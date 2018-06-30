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
#include<stack>
using namespace std;
stack<int>e;
int main()
{
    int t;
    long long int a,b,c,d;
    cin>>t;
    while(t--)
    {
        cin>>a;
        b=0;c=0;
        while(b<a)
        {
            c++;
            b=pow(2,c);
        }
        d=a-pow(2,c-1);
        if(b-a==1)
          while(c--)
                cout<<5;
            else if(b-a==0)
            { c--;
                while(c--)
                {
                cout<<5;
                }
                cout<<6;
                }
                else
                {
                    d++;
                    while(d!=0)
                    {
                        if(d%2==0)
                            e.push(5);
                        else
                            e.push(6);
                        d/=2;
                        c--;
                    }
                    c--;
                    while(c)
                    {
                        c--; e.push(5);}
                        while(!e.empty())
                        {
                            cout<<e.top();
                            e.pop();
                        }
                }
                if(t) cout<<endl;
    }
}
