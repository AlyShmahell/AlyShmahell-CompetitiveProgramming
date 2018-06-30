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
#include <algorithm>
using namespace std;

int main()
{
    int t,n,a[1001],b[1001],i,j,temp;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n;i++)
        cin>>b[i];

        for(i=0;i<n;i++)
            for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
            if(b[j]<b[i])
            {
                temp=b[j];
                b[j]=b[i];
                b[i]=temp;
            }
        }
temp=0;
        for(int i=0;i<n;i++)
            temp+=(a[i]*b[i]);
        cout<<temp;
        if(t!=0)
            cout<<endl;
    }
}
