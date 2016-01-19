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
    string password; // The Encrypted Password
    map <string,int> num; // a map of 10-bit numbers and their corresponding order
    cin>>password;
    for (int i=0; i<10; ++i)
    {
        string str;
        cin>>str;
        num[str]=i;
    }
    for (int i=0; i<8; ++i)
    {
        string substring(password,i*10 , 10) ; // each substring (10-bit number) of the password
        cout<<num[substring];
    }
    cout<<endl;
}
