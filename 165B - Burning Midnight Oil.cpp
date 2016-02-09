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

#include<bits/stdc++.h>
using namespace std;

int n,k,sum;
bool ok(int v)
{
    sum=0;
    int l=k;
    int m=1;
    while(v/m>0)
    {

        sum+=v/m;
        l=k;
        m*=l;
    }
    if(sum>=n)
        return 1;
    else
        return 0;
}

int main()
{
    cin>>n>>k;
    int start=0;
    int end_=n;
    int mid;
    while(start<end_)
    {
        mid=(start+end_)/2;

        if(ok(mid))
            end_=mid;
        else
            start=mid+1;
    }
    cout<<start;
}
