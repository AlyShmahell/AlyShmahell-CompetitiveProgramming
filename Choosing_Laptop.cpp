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
//Not Yet Complete
#include <iostream>
using namespace std;

int main()
{
    int n,index;
    cin>>n;
    int cost=1001;
    int properties[n][4];
    bool tag[n];
    for(int i=0;i<n;i++)
    {
        cin>>properties[i][0]>>properties[i][1]>>properties[i][2]>>properties[i][3];
        tag[i]=1;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((properties[i][0]<properties[j][0])&&(properties[i][1]<properties[j][1])&&(properties[i][2]<properties[j][2]))
                tag[i]=0;
        }
    }
    for(int i=0;i<n-1;i++)
    {
        if(tag[i]==1)
        {
           if(properties[i][3]<cost)
           {
               cost=properties[i][3];
               index=i;
           }
        }
    }
    cout<<index+1;
}
