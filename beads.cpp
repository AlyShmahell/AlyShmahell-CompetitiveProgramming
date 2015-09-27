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
TASK : beads
*/

#include <fstream>
#include <string.h>
#include <queue>
using namespace std;

ifstream in ("beads.in");
ofstream out ("beads.out");

pair<char,int> temp_count;
int perm_count=1;
int number;
char bead;
queue <char> beads;

int main()
{
    in>>number;
    for(int i=0; i<number; i++)
    {
        in>>bead;
        beads.push(bead);
    }
    /*debug
    for(int i=0; i<number; i++)
    {
    out<<beads.front();
    beads.pop();
    }
    */

    //first phase

    bead=beads.front();
    while(beads.front()==bead||beads.front()=='w')
    {
        beads.push(beads.front());
        beads.pop();
    }
    bead=beads.front();

    /*debug
    for(int i=0; i<number; i++)
    {
    out<<beads.front();
    beads.pop();
    }
    */

    temp_count.first=bead;
    temp_count.second=1;
    for(int i=0; i<number; i++)
    {
        if(temp_count.first!=bead&&beads.front()==bead)
        {
            if(temp_count.second>perm_count)
                perm_count=temp_count.second;
            temp_count.first=bead;
            temp_count.second=1;
            beads.push(beads.front());
            beads.pop();

        }
        else if(temp_count.first==bead&&(beads.front()!=bead&&beads.front()!='w'))
        {
             temp_count.first=beads.front();
             temp_count.second++;
             beads.push(beads.front());
             beads.pop();
        }
        else
        {
        temp_count.second++;
        beads.push(beads.front());
        beads.pop();
        }
    }

    //second phase

    bead=beads.front();
    while(beads.front()==bead||beads.front()=='w')
    {
        beads.push(beads.front());
        beads.pop();
    }
    bead=beads.front();


    temp_count.first=bead;
    temp_count.second=1;
    for(int i=0; i<number; i++)
    {
        if(temp_count.first!=bead&&beads.front()==bead)
        {
            if(temp_count.second>perm_count)
                perm_count=temp_count.second;
            temp_count.first=bead;
            temp_count.second=1;
            beads.push(beads.front());
            beads.pop();

        }
        else if(temp_count.first==bead&&(beads.front()!=bead&&beads.front()!='w'))
        {
             temp_count.first=beads.front();
             temp_count.second++;
             beads.push(beads.front());
             beads.pop();
        }
        else
        {
        temp_count.second++;
        beads.push(beads.front());
        beads.pop();
        }
    }
    out<<perm_count<<endl;
}
