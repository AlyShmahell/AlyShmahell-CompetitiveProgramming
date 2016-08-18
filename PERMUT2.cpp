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

#include<stdio.h>
#include<new>
#include<string>
using namespace std;
#define maximum 100001
typedef pair<int,int> ii;
ii *x = new ii[maximum];

int main()
{
    int n;
    while(scanf("%d",&n)&&n!=0)
    {
        bool flag = true;

        for(int i=1; i<=n; i++)
        {
            scanf("%d",&x[i].first);
            x[i].second=i;

        }
        for(int i=1; i<=n; i++)
        {

        if(x[i].first!=x[i].second)
        {
           if(x[x[i].first].first!=x[i].second)
            {
                flag=false;
                break;
            }

        }
        }
        if(flag==true)
            printf("%s","ambiguous\n");
        else
            printf("%s","not ambiguous\n");
    }
}
