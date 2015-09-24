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
#include<iostream>
using namespace std;

int temp1,temp2;
int a[200];

int main()
{
    int t,b,i,j,k,l;
    cin>>t;
    while(t--)
    {


        cin>>b;
        if(b==1) cout<<1;
        else if(b==2) cout<<2;
        else
        {
            for(i=0; i<200; i++)
                a[i]=0;

            a[0]=2;

            i=3;
            for(i; i<=b; i++)
            {
                temp1=0;
                temp2=0;
                int j=0;
                for(j; j<200; j++)
                {
                    temp1=i*a[j]+temp2;
                    a[j]=temp1%10;
                    temp2=temp1/10;
                }
                while(temp2!=0)
                {
                    a[j]=temp2%10;
                    temp2/=10;
                    j++;
                }
                l=j;
            }
            l=200;
            while(a[l]==0)
                l--;
            for(int k=l; k>=0; k--)
                cout<<a[k];
        }
        if(t) cout<<endl;
    }

}
