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
using namespace std;
int main()
{
    int k,a,b,v;
    cin>>k>>a>>b>>v;
    int temp;
    int box=1;
    int section=1;
    if(a<=v)
    {
        cout<<box;
        return 0;
    }
    while(1)
    {
        if(k>(b+1)&&b>=0)
        {
            section+=b;
            b=-1;
            temp=a/section;
            if(a%section) temp++;
            if(temp<=v)
            {
                cout<<box;
                return 0;
            }
            else
            {
                section++;
                box++;
            }
        }
        else if(k<=(b+1)&&b>=0)
        {
            section+=(k-1);
            b-=(k-1);
            temp=a/section;
            if(a%section) temp++;
            if(temp<=v)
            {
                cout<<box;
                return 0;
            }
            else
            {
                section++;
                box++;
            }
        }
        else if(b<0)
        {
            temp=a/section;
            if(a%section) temp++;
            if(temp<=v)
            {
                cout<<box;
                return 0;
            }
            else
            {
                section++;
                box++;
            }
        }
    }
}
