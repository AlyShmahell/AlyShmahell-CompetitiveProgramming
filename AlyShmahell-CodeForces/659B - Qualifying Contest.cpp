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
#include <algorithm>
#include <vector>
#include <string>
#include <utility>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    string name;
    int region, score;

    vector<pair<string, int> > teams[m];

    while(n--)
    {
        cin>>name>>region>>score;
        teams[region-1].push_back({name,score});
    }

    auto vctrCmpr = [](pair<string, int> a, pair<string, int> b)
    {
        if(a.second>b.second)
            return true;
        return false;
    };

    for(vector<pair<string, int> > team: teams)
    {
        sort(team.begin(),team.end(),vctrCmpr);
        if(team.size()>2 && team[1].second == team[2].second)
            cout<<"?\n";
        else
            cout<<team[0].first<<" "<<team[1].first<<endl;
    }
}
