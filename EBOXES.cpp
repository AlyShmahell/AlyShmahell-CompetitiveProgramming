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
using namespace std;

int ret(int n,int k,int f)
{
    int e=k;
    if(e==f)
        return e+n;
    else
    {
         if(f<=n*k)
         {
             for(int i=1;i<=n;i++)
             {
                 e=k*i+n-i;
                 if(e==f) {return e+i; break; }
             }
         }
         else
         {
            int temp=n*k;
            int sum=temp+n;
            int i=1;
            while(e<=f)
            {
                e=k+temp-1;
                sum+=k;
                if(e==f) {return sum; break;}
                temp=e;
            }
         }
    }
}

int main()
{
    int test_case,n,k,t,f;

    cin>>test_case;

    while(test_case--)
    {
        cin>>n>>k>>t>>f;

        cout<<ret(n,k,f);
        if (test_case>=1)
            cout<<endl;
    }
}
