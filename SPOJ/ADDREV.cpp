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

#include<fstream>
#include<cmath>
using namespace std;
int poww(int b)
{  int c=1;
    while(b--)
        c*=10;
        return c;
}
int converter(int a)
{
    int b,j;
     j=(int)log10(a);
        b=0;
        while(a)
        {
              b+=((a%10)*poww(j));
              a/=10;
              j--;
        }
return b;

}
int main()
{
    int t,a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&a);
        scanf("%d",&b);
      printf("%d",converter(converter(a)+converter(b)));
       if(t) printf("\n");
    }
}
