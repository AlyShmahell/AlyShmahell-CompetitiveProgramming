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

int ret(int n,int k,int f)
{
    int e=k;
    if(e==f)
        return e+n;
    else
    {
         if(f<=n*k)
         {
             for(int i=1;i<=n;i++)
             {
                 e=k*i+n-i;
                 if(e==f) {return e+i; break; }
             }
         }
         else
         {
            int temp=n*k;
            int sum=temp+n;
            int i=1;
            while(e<=f)
            {
                e=k+temp-1;
                sum+=k;
                if(e==f) {return sum; break;}
                temp=e;
            }
         }
    }
}

int main()
{
    int test_case,n,k,t,f;

    cin>>test_case;

    while(test_case--)
    {
        cin>>n>>k>>t>>f;

        cout<<ret(n,k,f);
        if (test_case>=1)
            cout<<endl;
    }
}
