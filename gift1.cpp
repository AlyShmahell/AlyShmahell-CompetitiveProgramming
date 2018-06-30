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

/**
 * ID : aly.shm1
 * LANG : C++
 * TASK : gift1
 */
#include<utility>
#include <string>
#include <fstream>
using namespace std;
typedef pair<int,int> ii;
int main()
{
    ifstream in ("gift1.in");
    ofstream out ("gift1.out");
    string friends[11];
    ii money[11];
    for(int a=0; a<11; a++)
    {
        money[a].first=0;
        money[a].second=0;
    }
    int number;
    in>>number;
    for(int i=0; i<number; i++)
    {
        in>>friends[i];
    }
    string giver;
    for(int i=0; i<number; i++)
    {
        in>>giver;
        for(int j=0; j<number; j++)
        {
            if(giver==friends[j])
            {
                in>>money[j].second;
                int rest;
                in>>rest;
                if(rest==0) {money[j].first+=(money[j].second);}
                else
                {
                money[j].first+=(money[j].second%rest);
                string rest_names;
                for(int k=0; k<rest; k++)
                {
                    in>>rest_names;
                    for(int l=0; l<number; l++)
                    {
                        if(rest_names==friends[l])
                            money[l].first+=(money[j].second/rest);
                    }
                }
                }
            }
        }
    }
    for(int m=0; m<number; m++)
        out<<friends[m]<<" "<<money[m].first-money[m].second<<endl;
}
