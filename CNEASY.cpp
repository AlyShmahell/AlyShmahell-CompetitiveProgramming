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
#include<algorithm>
#include<string>
#include<cmath>

using namespace std;



void cn()
{

    string s;
    int n;
    double x,y,a[1002];
    cin>>n;

    for(int i=0;i<n;i++)
     cin>>s>>a[i];

    sort(a,a+n);
    x=a[0];
    for(int i=1;i<n;i++)
    {
        a[i-1]=360.00-a[i]+a[i-1];
    }
a[n-1]-=x;

   sort(a,a+n);

        y=a[0];
        x=12.00*y;
        cout<<(int)(ceil(x));


    }


    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            cn();
            if(t!=0)
                cout<<endl;
        }
    }
