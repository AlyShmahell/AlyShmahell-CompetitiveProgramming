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
int counter;
string queen;
pair <int,int> queens[8];
bool place(int row,int col)
{
    for(int j=0; j<counter; j++)
        if(queens[j].first==row||queens[j].second==col||abs(queens[j].first-row)==abs(queens[j].second-col))
            return false;

    return true;
}
int main()
{
    long long int t;

    cin>>t;
    while(t--)
    {
        for(int k=0; k<8; k++)
        {
            cin>>queen;
            queens[k].first=(int) queen[0]-'A'+1;
            queens[k].second=(int) queen[1]-'0';
        }

        bool flag=1;
        for( counter=1; counter<8; counter++)
            if(!place(queens[counter].first,queens[counter].second))
                {
                 flag=0;
                 cout<<"Invalid"<<endl;
                 break;
                }
        if(flag)
            cout<<"Valid"<<endl;
    }

}
