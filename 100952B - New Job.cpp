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
#include <stdint.h>
using namespace std;

int64_t m,n,first,last,mid;

int64_t power(int64_t base, int64_t power)
{
    int64_t accumulator = 1;
    while(power>0&&power--)
        accumulator*=base;
    return accumulator;
}

static inline int64_t log2(const int64_t value)
{
    int64_t log;
    asm ("\tbsr %1, %0\n": "=r"(log): "r" (value));
    return log;
}

bool ok(int64_t val)
{
    return ((power(2,val+1)-1)<n)?true:false;
}

void calculator()
{
    cin>>n>>m;
    first=0;
    last=log2(m);

    while(first<last)
    {
        mid=(first+last)/2;
        if(ok(mid))
            first=mid+1;
        else
            last=mid;
    }
    mid = (first+last)/2;
    if(!ok(mid))
        cout<<mid+1;
    else
        cout<<mid+1+((n-(power(2,mid+1)-1))/m)+(((n-(power(2,mid+1)-1))%m)?1:0);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        calculator();
        if(t)
            cout<<endl;
    }
}
