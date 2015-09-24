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
