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
{long long int k;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>k;
        if(k%2==0)
            cout<<442+((k-1)/2)*500;
        else
            cout<<192+(k/2)*500;
        if(t!=0) cout<<endl;
    }
}
