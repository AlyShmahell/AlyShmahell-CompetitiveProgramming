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

#include <fstream>

#define MAX 65536
#define population_size 6541

unsigned preliminary[MAX+1];
unsigned primes[population_size];

void sieve()
{
    for(unsigned i=3; i*i<MAX; i+=2)
    {
        if(preliminary[i]==0)
            for(unsigned k=i*i; k<MAX; k+=i)
            {
                preliminary[k]=1;
            }
    }

    for(unsigned i=3,j=0; i<MAX; i+=2)
        if(preliminary[i]==0)
        {
            primes[j++]=i;
        }
}

bool isprime(unsigned n)
{
    for(int counter=0; counter<population_size && primes[counter]*primes[counter]<=n; counter++)
        if(n%primes[counter]==0)
            return false;

    return true;
}

int main()
{
    sieve();
    int t;
    unsigned n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%u",&n);
        if( n%2!=0 ) n -= 2;
		else n -= 1;
        while(isprime(n)==0)
        {
            n-=2;
        }
        printf("%u\n",n);
    }
}
