/*
Copyright (c) 2013-2016 Aly Shmahell

 This software is provided 'as-is', without any express or implied warranty. 
 In no event will the authors be held liable for any damages arising from
 the use of this software.

    Permission is granted to anyone to use this software for any purpose,
    including commercial applications, and to alter it and redistribute it
    freely, subject to the following restrictions:

    1. The origin of this software must not be misrepresented; you must not
       claim that you wrote the original software. If you use this software
       in a product, an acknowledgement in the product documentation is required.
    2. Altered source versions must be plainly marked as such, and must not be
       misrepresented as being the original software.
    3. This notice may not be removed or altered from any source distribution.
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
