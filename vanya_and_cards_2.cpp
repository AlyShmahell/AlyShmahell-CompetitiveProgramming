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
    int n,x,cards,result=0,input=0;
    cin>>n>>x;
    while(n--)
    {
        cin>>cards;
        input+=cards;

    }
    if(input<0)
    input*=(-1);
    if(input/x>0)
            result+=(input/x);
        if(input%x>0)
            result++;
        cout<<result;
}
