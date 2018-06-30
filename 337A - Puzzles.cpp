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
#include <stdint.h>
using namespace std;

int main()
{
    int64_t n,m;
    cin>>n>>m;
    int64_t a[m];
    for(int64_t i=0; i<m; i++)
        cin>>a[i];
    sort(a,a+m);
    int64_t globalMax=1000;
    for(int64_t i=0, j=n-1; i<m, j<m; i++,j++)
        if(abs(a[i]-a[j])<=globalMax)
            globalMax=abs(a[i]-a[j]);

    cout<<globalMax;
}
