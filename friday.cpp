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
/*
ID : aly.shm1
LANG : C++
TASK : friday
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
