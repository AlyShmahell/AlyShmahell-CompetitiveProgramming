/*
Copyright (c) 2016 Aly Shmahell

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
#include <string.h>

int main()
{
    char T[600];
    int counter=0;
    while (((T[counter] = getchar()) != '\n') && (T[counter] != EOF))
        counter++;
    for(int i=0; i<counter; i++)
    {
        printf("%c",T[i]);
        if(T[i]==',')
            printf(" ");
        if(T[i]=='.')
        {
            printf(" ");
            if(T[i+1]>90)
            {
                printf("%c",(char)((int)T[i+1]-32));
                i++;
            }
        }
    }
    return 0;
}