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
 * TASK : beads
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
