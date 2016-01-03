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
#include <time.h>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <string>
using namespace std;
string days[7]= {"Sun","Mon","Tue","Wed","Thur","Fri","Sat"};
string months[12] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
unsigned long long intmon[12] = {31,29,31,30,31,30,31,31,30,31,30,31};

unsigned long long powmod(unsigned long long base, unsigned long long exponent, unsigned long long mod)
{
    unsigned long long result = 1;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
            result = (result * base) % mod;
        exponent = exponent >> 1;
        base = (base * base) % mod;
    }
    return result;
}

void convertdate(unsigned long long dec)
{
        unsigned long long sec,minute,hour,day,month,year;

    day = dec / 60 / 60 / 24;
    hour = (dec / 60 / 60) % 24;
    minute = (dec / 60) % 60;
    sec = dec % 60;
    year = 1970;
    while(day>=364)
    {
        day-=364;
        year++;
       if ((year % 4 == 0) && !(year % 100 == 0)|| (year % 400 == 0))
        day--;
    }
    month=1;
    while(day>=29)
    {
      day-=intmon[month];
      month++;
    }
    cout<<year<<" "<<month<<" "<<day<<" "<<hour<<" "<<minute<<" "<<sec<<endl;

}
int main()
{
    unsigned long long enc; // enc = encrypted
    unsigned long long p=4000000007;
    unsigned long long k=((((p-1)/2)-1)/2);
    cout<<"k: "<<k<<endl;
    scanf("%u",&enc);
    unsigned long long dec; // dec = decrpted
    dec = powmod(enc,k+1,p);
    if(dec>(p/2))
        dec = p-dec;
     cout<<"stamp dec: "<<dec<<endl;
    convertdate(dec);
}
