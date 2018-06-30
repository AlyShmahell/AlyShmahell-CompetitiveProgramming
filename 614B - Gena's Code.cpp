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
int main()
{
    int n;
    bool flag=0;
    string counter;
    string notbeautiful;
    string a;
    cin>>n;
    while(n--)
    {
        string midcounter;
        int pointer=0;
        cin>>a;
        if(a=="0")
        {
            flag=1;
            break;
        }
        for(int i=0; i<a.size(); i++)
        {
            if(a[i]=='0')
            {
                midcounter+=a[i];
            }


            else
            {
                if(a[i]=='1')
                {
                    if(!pointer)
                    {
                        pointer++;
                        if(notbeautiful.empty())
                        {
                            midcounter.clear();
                            notbeautiful.assign("1");
                        }
                    }

                    else
                    {
                        midcounter.clear();
                        notbeautiful.assign(a);
                        break;
                    }
                }
                else
                {
                    midcounter.clear();
                    notbeautiful.assign(a);
                    break;
                }
            }
        }
        if(midcounter==a)
        {
            flag=1;
            break;
        }
        else
            counter+=midcounter;
    }
    if(flag==0)
        cout<<notbeautiful+counter;
    else
        cout<<0;
}
