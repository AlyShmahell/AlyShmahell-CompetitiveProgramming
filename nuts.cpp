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
    int k,a,b,v,balance,boxes=1,temp,sections=1;
    cin>>k>>a>>b>>v;
    temp=0;
    temp+=(a/sections);
    if((a%sections)!=0)
        temp++;
    if(temp<v)
    {
        cout<<boxes;
        return 0;
    }
    while(1)
    {
        if(k>(b+1)&&b>=0)
        {
            sections+=(b);
            b=-1;
            temp=0;
            temp+=(a/sections);
            if((a%sections)!=0)
                temp++;
            if(temp<=v)
            {
                cout<<boxes;
                return 0;
            }
            else
            {
            sections++;
                boxes++;
            }
        }
        else if(k<=(b+1)&&b>=0)
        {
            sections+=(k-1);
            b-=(k-1);

            temp=0;
            temp+=(a/sections);
            if((a%sections)!=0)
                temp++;
            if(temp<=v)
            {
                cout<<boxes;
                return 0;
            }
            else
            {
            sections++;
                boxes++;
            }
        }
        else if(b<=0)
        {

            temp=0;
            temp+=(a/sections);
            if((a%sections)!=0)
                temp++;
            if(temp<=v)
            {
                cout<<boxes;
                return 0;
            }
            else
            {
            sections++;
                boxes++;
            }
        }

    }

}
