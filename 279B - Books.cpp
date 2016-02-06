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

#include <bits/stdc++.h>
using namespace std;
int n,t, b[100009];
bool check(int x)
{
  int sum=0;
  for(int i =0;i<=n-x;i++)
  {
      if(b[i+x]-b[i]<=t)
        return 1;
  }
  return 0;
}
int main()
{
    cin>>n>>t;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int start=0;
    int end_=n+1;
    int  mid;
    memset(b,0,sizeof b);
    for(int i=0;i<n;i++)
    {
        b[i+1]+=b[i]+a[i];

    }

    while(start<end_)
    {
     mid=(start+end_)/2;
     if(check(mid)) start=mid+1;
     else
        end_=mid;
    }
    cout<<start-1;
}
