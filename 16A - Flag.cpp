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

#include <iostream>
using namespace std;

int main()
{
    int n,m;
    bool peep=1;
    cin>>n>>m;
    char flag[n][m];
    int i,j;
    for(i =0; i<n; i++)
    {
        for(j =0; j<m; j++)
        {
            cin>>flag[i][j];
            if(j>0)
                if(flag[i][j]!=flag[i][j-1])
                    peep=0;
        }
        if(i>0)
            if(flag[i][j-1]==flag[i-1][j-1])
                peep=0;
    }
    if(peep==1)
        cout<<"YES";
    else
        cout<<"NO";
}
