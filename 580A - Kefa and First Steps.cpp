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

int main()
{
    int64_t n;
    cin>>n;
    int64_t a[n];
    int64_t globalMax=0, localMax=1;
    cin>>a[0];
    for (int i=1; i<n; i++)
    {
        cin>>a[i];
        if(a[i]>=a[i-1])
            localMax++;
        else
        {
            if(globalMax<localMax)
                globalMax=localMax;
            localMax=1;
        }
    }
    if(globalMax<localMax)
        globalMax=localMax;
    cout<<globalMax;
}
