/*
Copyright (c) 2013-2017 Aly Shmahell

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

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        n=(n==1)?n+1:n;

        int indices[m-n];
        for(int i=0;i<=m-n;i++)
            indices[i]=0;

        for(int i=2; i*i<=m; i++)
            for(int j=(n/i)*i; j<=m; j+=i)
                if(j!=i&&j>=n)
                        indices[j-n]=1;

        for(int i=0; i<=m-n; i++)
            if(indices[i]==0)
                printf("%d\n",n+i);
    }
}
