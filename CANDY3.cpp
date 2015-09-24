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

int main()
{
    long long int a,input,i,temp,t;
    cin>>t;
    while(t--)
    {
        cout<<endl;
        cin>>a;
        temp=0;

        if(a==-1)
          break;

        for(i=1;i<=a;i++)
        {
          cin>>input;
          temp=(temp+input)%a;
        }

            if(temp%a==0)
                                   cout<<"YES";
                    else
                                    cout<<"NO";

                                    if(t!=0) cout<<endl;

    }

}
