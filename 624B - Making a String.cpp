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

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;  // number of substrings
    cin>>t;
    set <long long> uniq;  // set of unique substrings
    long long size_;  // set size
    long long sub;  // substring alphabet size
    long long total=0;  // total string length
    for(long long i=0; i<t; i++)
    {
        cin>>sub;
        size_=uniq.size();
        uniq.insert(sub);
        while(size_==uniq.size())
        {
            sub--;
            uniq.insert(sub);
        }
        total+=(sub>=0?sub:0);
    }
    cout<<total;
}
