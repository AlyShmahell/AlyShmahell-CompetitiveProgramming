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
#include <stdio.h>
using namespace std;

int a[3][21];
int minimum(int j,int k)
{
    if(j<=k) return j;
    else
        return k;

}

int main()
{
    int t,i,j,z;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&z);
        for(j=0;j<z;j++)
            for(i=0;i<3;i++)
            scanf("%d",&a[i][j]);
       for (j=1;j<z;j++)
       {
            a[0][j]+=minimum(a[1][j-1],a[2][j-1]);
            a[1][j]+=minimum(a[0][j-1],a[2][j-1]);
            a[2][j]+=minimum(a[1][j-1],a[0][j-1]);
       }
          printf("%d",minimum(a[0][z-1],minimum(a[1][z-1],a[2][z-1])));
          if(t) printf("\n");
    }
}
