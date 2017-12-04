/*
Copyright (c) 2017 Aly Shmahell

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
#include <string>
#include <stdint.h>
#include <algorithm>
using namespace std;


string f0 = "What are you doing at the end of the world? Are you busy? Will you save us?";
string fi[3] = {"What are you doing while sending \"","\"? Are you busy? Will you send \"","\"?"};
int64_t inceptionSize[100001];


char dfs(int64_t n, int64_t k)
{
    /**
     * if target character is out of bound with the upper most inception level, output .
     */
    if (k >= inceptionSize[n]) return '.';

    /**
     * if we arrived at inception level 0, find character.
     */
    if (n == 0) return f0[k];

    for (string fj: fi)
    {
        /**
         * checks if we arrived at a target fi on the current inception level
         */
        if (k < fj.size())
            return fj[k];

        /**
         * removes current fi at the current inception level in an attempt to tighten the search area for a fi on a lesser inception level
         */
        k -= fj.size();

        if (k < inceptionSize[n-1])
            return dfs(n-1,k);

        /**
         * removes an entire block of the lesser inception level, moves to the next fi on this inception level
         */
        k -= inceptionSize[n-1];
    }
}


int main()
{
    /**
     * n represents an uppermost inception level, and k represents a target index along the resulting string
     */
    int64_t q,n,k;
    string answer = "";

    /**
     * populate the maximum size of each inception level, taking into account that each inception level contains twice the lesser inception level
     * also keep in mind that at a certain point inception levels will get out of bound in size, but the target index is in range (1e18), so fill all out of bound inception levels with 1e18
     */
    inceptionSize[0] = f0.size();
    for (int ni = 1; ni < 100001; ni++)
        inceptionSize[ni] =min((int64_t)1e18, (int64_t)2*inceptionSize[ni-1] + (int64_t) (fi[0]+fi[1]+fi[2]).size());

    cin>>q;

    while(q--)
    {
        cin>>n>>k;
        answer+=dfs(n,k-1);
    }
    cout<<answer;
}
