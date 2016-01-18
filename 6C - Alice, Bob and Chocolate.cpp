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
#include <iostream>
using namespace std;

int main()
{
    unsigned long long n;
    cin>>n;
    int t[n];
    int alice=0,bob=0,alice_counter=0,bob_counter=n-1;
    for(int i=0;i<n;i++)
       cin>>t[i];


    while(bob_counter-alice_counter>=0)
    {
       if(alice<=bob)
        alice+=t[alice_counter++];
       else
        bob+=t[bob_counter--];
    }
    cout<<alice_counter<<" "<<n-alice_counter;
}
