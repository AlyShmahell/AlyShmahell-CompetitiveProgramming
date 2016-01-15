/*
Copyright 2016 ALY SHMAHELL

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
#include <iostream>
#include <queue>
using namespace std;

priority_queue <int> a;

int main()
{
    int k;
    cin>>k;
    int mon;
    for(int i=0; i<12; i++)
    {
        cin>>mon;
        a.push(mon);
    }
    int num=0;
    while(k>0)
    {
        k-=a.top();
        a.pop();
        num++;
    }
    if(k>0)
        cout<<-1;
    else
    cout<<num;
}
