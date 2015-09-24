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
#include <math.h>
#include <stack>
using namespace std;

stack <long long int> a;

long long int bin(long long int x)
{
    while (x!=0)
    {
        a.push(x%2);
        x/=2;
    }

    x=0;
    long long int i=0;
    while(!a.empty())
    {
        x+=a.top()*pow(2,i);
        a.pop();
        i++;
    }
    return x;
}

int main()
{
    int n;
    long long int x;
    cin>>n;
    while (n--)
    {
        cin>>x;
        if(x%2==0)
        {
            cout<<bin(x);
        }
        else
            cout<<x;
        if (n>=1)
            cout<<endl;
    }
}
