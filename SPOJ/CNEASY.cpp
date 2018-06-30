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
#include<algorithm>
#include<string>
#include<cmath>

using namespace std;



void cn()
{

    string s;
    int n;
    double x,y,a[1002];
    cin>>n;

    for(int i=0;i<n;i++)
     cin>>s>>a[i];

    sort(a,a+n);
    x=a[0];
    for(int i=1;i<n;i++)
    {
        a[i-1]=360.00-a[i]+a[i-1];
    }
a[n-1]-=x;

   sort(a,a+n);

        y=a[0];
        x=12.00*y;
        cout<<(int)(ceil(x));


    }


    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            cn();
            if(t!=0)
                cout<<endl;
        }
    }
