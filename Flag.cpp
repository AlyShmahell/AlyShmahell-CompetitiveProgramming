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
