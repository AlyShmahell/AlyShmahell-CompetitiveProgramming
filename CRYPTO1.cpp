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
// Not Complete Yet
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <string>
using namespace std;
string days[7]= {"Sun","Mon","Tue","Wed","Thur","Fri","Sat"};
string months[12] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
int main()
{
    unsigned long long enc;
    unsigned long long p=4000000007;
    unsigned long long k=(((p-1)/2)-1)/2;
    scanf("%u",&enc);
    unsigned long long dec;
    dec = powmod(enc,k+1,p);
    if(dec>p/2)
    dec = p-dec;
}
