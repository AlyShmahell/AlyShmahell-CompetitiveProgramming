/*
Copyright 2015-2016 ALY SHMAHELL

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
string days[7]= {"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
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
    time_t seconds(dec);
    tm *timestruct = gmtime(&seconds);

    cout<<days[timestruct->tm_wday]<<" "<<months[timestruct->tm_mon]<<" "<<timestruct->tm_mday<<" "<<timestruct->tm_hour<<":"<<timestruct->tm_min<<":"<<timestruct->tm_sec<<" "<<timestruct->tm_year+1900<<endl;
}
int main()
{
    unsigned long long enc; // enc = encrypted
    unsigned long long p=4000000007;
    unsigned long long k=((((p-1)/2)-1)/2);
    scanf("%u",&enc);
    unsigned long long dec; // dec = decrypted
    dec = powmod(enc,k+1,p);
    if(dec>(p/2))
        dec = p-dec;
    convertdate(dec);
}
