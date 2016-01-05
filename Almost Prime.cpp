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
    int n;
    cin>>n;
    int m[n+1]; //matrix[n+1]
    int counter=0;
    for(int i = 1; i<=n; i++)
    {
        m[i]=1;
    }
    m[2]=1;
    for(int i = 2; i*i<=n; i++)
    {
        for(int j =i;j*j<=n; j++)
            if(m[j]==1&&m[i]==1)
            m[i*j]=0;
    }
    for(int i = 1; i*i<=n; i++)
        for(int j = i+1; j*j<=n; j++)
        {
          if(m[j]==1&&m[i]==1)
            m[i*j]=-1;
        }
        for(int i = 1; i<=n; i++)
            if(m[i]==-1)
            counter++;
        cout<<counter;
}
