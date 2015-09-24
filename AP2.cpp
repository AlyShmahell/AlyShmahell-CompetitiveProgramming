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
#include<cmath>
using namespace std;



void counter(long long int a,long long int b,long long int s)
{
    if(s==0) cout<<endl;
    else
           {

               long long int n;
                        n=(2*s)/(b+a);
                        cout<<n<<endl;
               long long int t,d;

                       t=b-a;
                       d=(long long int) ceil((double) t/ (double)(n-5));

                            for(long long int i=-2; i<=n-3; i++)
                                {
                                    t=a+i*d;
                                    cout<<t<<" ";
                                }
                      cout<<endl;
            }
}

int main()
{
    long long int tc,a,b,f;
    cin>>tc;

    while(tc--)
    {
        cin>>a>>b>>f;
        counter(a,b,f);
    }
}
