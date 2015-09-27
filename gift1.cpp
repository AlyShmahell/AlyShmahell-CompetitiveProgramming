/*
Copyright 2013-2015 ALY SHMAHELL

 This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
/*
ID : aly.shm1
LANG : C++
TASK : gift1
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
