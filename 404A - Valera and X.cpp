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
#include<iostream>
using namespace std;
int main()
{
    int n;
    char matrix[300][300];

    cin>>n;

    for(int i = 0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>matrix[i][j];

    for(int i=0; i<n; i++)
    {
        if((matrix[i][i]!=matrix[i][n-i-1])||((matrix[i][i]!=matrix[0][0])||(matrix[i][n-i-1]!=matrix[0][0])))
        {
            cout<<"NO";
            return 0;
        }
        for(int j=0; j<n; j++)
        {
            if((j!=i)&&(j!=(n-i-1))&&((matrix[i][j]==matrix[0][0])||(matrix[i][j]!=matrix[0][1])))
            {
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";
    return 0;
}
