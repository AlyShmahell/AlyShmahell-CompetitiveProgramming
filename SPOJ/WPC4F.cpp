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
