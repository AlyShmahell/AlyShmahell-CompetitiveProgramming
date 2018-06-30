/*
Copyright (c) 2016 Aly Shmahell

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
