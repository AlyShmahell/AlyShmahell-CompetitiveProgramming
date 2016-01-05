/*
Copyright 2016 ALY SHMAHELL

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
//Not Yet Complete
#include <iostream>
using namespace std;

int main()
{
    int d,sumtime,sumtime_backup;
    int mini, maxi;
    cin>>d>>sumtime;
    sumtime_backup=sumtime;
    int solutions[d];
    int counter=0;
    int sumin=0,sumax=0;
        while(d-- && sumtime)
        {
            cin>>mini>>maxi;
            sumin+=mini;
            sumax+=maxi;
            if(sumtime>=maxi)
            {
                sumtime-=maxi;
                solutions[counter]=maxi;
            }
            else if(sumtime>=mini)
            {
                while(mini<maxi&&sumtime>=mini+1)
                    mini++;

                sumtime-=mini;
                solutions[counter]=mini;
            }
            counter++;
        }
        if(sumin<=sumtime_backup&&sumtime_backup<=sumax)
        {
            cout<<"YES\n";
            for(int i=0; i<counter; i++)
            {
                cout<<solutions[i]<<" ";
            }
        }
        else
            cout<<"NO";

    return 0;
}
