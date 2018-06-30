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
#include <cstdio>
#include <stdint.h>
using namespace std;

int main()
{
    int64_t n;
    int64_t cl; //claw length
    int64_t s; //survivors
    int64_t stc[1000005]; //indexes that cover the survivors until current claw
    scanf("%ld",&n);
    for(int64_t i=0; i<n; ++i)
    {
        scanf("%ld",&cl);
        while(s>0&&stc[s]>=i-cl)
            s--;
        stc[++s]=i;
    }
    printf("%ld",s);
}
