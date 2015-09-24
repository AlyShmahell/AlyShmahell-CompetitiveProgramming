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
