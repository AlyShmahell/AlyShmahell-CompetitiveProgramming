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

/**
 * ID : aly.shm1
 * LANG : C++
 * TASK : friday
 */
#include<fstream>
#include<queue>
using namespace std;
queue<int> days;
int main()
{
    days.push(0);
    days.push(1);
    days.push(2);
    days.push(3);
    days.push(4);
    days.push(5);
    days.push(6);
    ifstream in ("friday.in");
    ofstream out ("friday.out");
    int day_13[7]= {0,0,0,0,0,0,0};
    int months_default[12]= {31,28,31,30,31,30,31,31,30,31,30,31};
    int number;
    int leap;
    in>>number;
    for(int i=1900; i<=1900+number-1; i++)
    {
        if(((i%100==0)&&(i%400==0))||((i%100!=0)&&(i%4==0)))
        {
            leap=1;
        }
        else
        {
            leap=0;
        }
        for (int j=1; j<=12; j++)
        {
            for(int h=1; h<=((j==2)?months_default[j-1]+leap:months_default[j-1]); h++)
            {
               if(h==13)
               day_13[days.front()]++;

               days.push(days.front());
               days.pop();
            }
        }
    }
    out<<day_13[5]<<" "<<day_13[6]<<" "<<day_13[0]<<" "<<day_13[1]<<" "<<day_13[2]<<" "<<day_13[3]<<" "<<day_13[4]<<endl;
}
