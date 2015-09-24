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
