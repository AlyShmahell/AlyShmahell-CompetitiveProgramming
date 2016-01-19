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
int main()
{
    int n;
    bool flag=0;
    string counter;
    string notbeautiful;
    string a;
    cin>>n;
    while(n--)
    {
        string midcounter;
        int pointer=0;
        cin>>a;
        if(a=="0")
        {
            flag=1;
            break;
        }
        for(int i=0; i<a.size(); i++)
        {
            if(a[i]=='0')
            {
                midcounter+=a[i];
            }


            else
            {
                if(a[i]=='1')
                {
                    if(!pointer)
                    {
                        pointer++;
                        if(notbeautiful.empty())
                        {
                            midcounter.clear();
                            notbeautiful.assign("1");
                        }
                    }

                    else
                    {
                        midcounter.clear();
                        notbeautiful.assign(a);
                        break;
                    }
                }
                else
                {
                    midcounter.clear();
                    notbeautiful.assign(a);
                    break;
                }
            }
        }
        if(midcounter==a)
        {
            flag=1;
            break;
        }
        else
            counter+=midcounter;
    }
    if(flag==0)
        cout<<notbeautiful+counter;
    else
        cout<<0;
}
