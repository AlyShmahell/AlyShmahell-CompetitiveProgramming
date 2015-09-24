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
#include <iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--)
    {
    int a,b;
        cin>>a>>b;
        if(a==1) a++;

        int p[b-a];

        for(int i=0;i<=b-a;i++)
         p[i]=1;

        for(int i=2;i*i<=b;i++)
        {
            int k=a/i;
            k*=i;
            for(int j=k;j<=b;j+=i)
              if(j!=i&&j>=a)
                p[j-a]=0;
        }

        for(int i=0;i<=b-a;i++)
        if(p[i]==1)
           cout<<a+i<<endl;

if(t) cout<<endl;

    }
}
