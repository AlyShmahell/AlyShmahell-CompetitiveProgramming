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
#include <stdio.h>
#include <cmath>

int main()
{
    int n;
    scanf("%d", &n);

    int beautiful,answer=1;
    for(int i=1; i<9; i++) // sqrt(pow(10,5)) ~= 316 = 0b100111100, and it has 9 binary digits
    {
        beautiful=(pow(2,i)-1)*pow(2,(i-1));
        if(n%beautiful==0)
            answer=beautiful;
    }
    printf("%d", answer);
}
