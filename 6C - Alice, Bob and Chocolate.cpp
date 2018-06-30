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
