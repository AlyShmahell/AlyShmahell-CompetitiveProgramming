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

#include<bits/stdc++.h>
using namespace std;

int n,k,sum;
bool ok(int v)
{
    sum=0;
    int l=k;
    int m=1;
    while(v/m>0)
    {

        sum+=v/m;
        l=k;
        m*=l;
    }
    if(sum>=n)
        return 1;
    else
        return 0;
}

int main()
{
    cin>>n>>k;
    int start=0;
    int end_=n;
    int mid;
    while(start<end_)
    {
        mid=(start+end_)/2;

        if(ok(mid))
            end_=mid;
        else
            start=mid+1;
    }
    cout<<start;
}
