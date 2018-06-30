/*
Copyright (c) 2017 Aly Shmahell

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
#include <stdlib.h>
#include <algorithm>
using namespace std;

bool pairCompare(pair<short,int64_t> first, pair<short,int64_t> second)
{
    return (first.second>second.second)?true:false;
}

int main()
{
    int64_t n;
    cin>>n;

    if(n%4==0)
    {
        cout<<0;
        return 0;
    }

    pair<short,int64_t> a[3];
    cin>>a[0].second>>a[1].second>>a[2].second;
    a[0].first = 1;
    a[1].first = 2;
    a[2].first = 3;
    pair<short,int64_t> b[3];
    for(int i=0;i<3;i++)
    b[i]=a[i];

    int64_t globalMax = 1000000000;
    short up =3;
    if(n%2!=0)
    {
        up = 2;
        a[1] = a[2];
    }
    sort(a,a+up,pairCompare);

    sort(b,b+3,pairCompare);
    short k = 0;
    for(int64_t i=0; i<3; i++)
    {
        for(int64_t j=i+1; j<3; j++)
        {
            k=b[i].first+b[j].first;
            if((n+k)%4==0&&b[i].second+b[j].second<globalMax)
            {
                globalMax=b[i].second+b[j].second;
            }
        }
    }

    for(int64_t i=0; i<up; i++)
    {
        for(int64_t j=1; j<=a[0].second/a[i].second; j++)
        {
            if((n+j*a[i].first)%4==0&&(j*a[i].second)<globalMax)
                globalMax = (j*a[i].second);
        }
    }

    cout<<globalMax;
}

