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
#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
    int n,m;
    int l,r;
    char c1,c2;
    cin>>n>>m;
    char text[n];
    for(int i=0; i<n; i++)
        cin>>text[i];
    while(m--)
    {
        cin>>l>>r>>c1>>c2;
        for(int i=l-1; i<=r-1; i++)
            if(text[i]==c1)
                text[i]=c2;
    }
    for(int i=0; i<n; i++)
        cout<<text[i];
}
