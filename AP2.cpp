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



void counter(long long int a,long long int b,long long int s)
{
    if(s==0) cout<<endl;
    else
           {

               long long int n;
                        n=(2*s)/(b+a);
                        cout<<n<<endl;
               long long int t,d;

                       t=b-a;
                       d=(long long int) ceil((double) t/ (double)(n-5));

                            for(long long int i=-2; i<=n-3; i++)
                                {
                                    t=a+i*d;
                                    cout<<t<<" ";
                                }
                      cout<<endl;
            }
}

int main()
{
    long long int tc,a,b,f;
    cin>>tc;

    while(tc--)
    {
        cin>>a>>b>>f;
        counter(a,b,f);
    }
}
