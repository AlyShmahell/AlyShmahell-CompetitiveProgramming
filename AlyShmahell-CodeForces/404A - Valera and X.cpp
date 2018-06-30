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

#include<iostream>
using namespace std;
int main()
{
    int n;
    char matrix[300][300];

    cin>>n;

    for(int i = 0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>matrix[i][j];

    for(int i=0; i<n; i++)
    {
        if((matrix[i][i]!=matrix[i][n-i-1])||((matrix[i][i]!=matrix[0][0])||(matrix[i][n-i-1]!=matrix[0][0])))
        {
            cout<<"NO";
            return 0;
        }
        for(int j=0; j<n; j++)
        {
            if((j!=i)&&(j!=(n-i-1))&&((matrix[i][j]==matrix[0][0])||(matrix[i][j]!=matrix[0][1])))
            {
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";
    return 0;
}