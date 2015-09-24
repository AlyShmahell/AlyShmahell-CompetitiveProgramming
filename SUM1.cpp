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
#include<cmath>
using namespace std;

unsigned long long int  counter(unsigned long long int i)
{
    return (i*(i+1)/2);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unsigned long long int a,b,c,d;

        cin>>a;
        b=ceil((double)a/3.00)-1;
        c=ceil((double)a/5.00)-1;
        d=ceil((double)a/15.00)-1;


        cout<<3*counter(b)+5*counter(c)-15*counter(d)<<endl;
    }
}
