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

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double a,b,c,delta,x1,x2;
    cin>>a>>b>>c;
    delta = sqrt(b*b-4*c*a);
    x1=(-b-delta)/(2*a);
    x2=(-b+delta)/(2*a);
    cout<<setprecision(15)<<fixed;
    cout<<max(x1,x2)<<endl<<min(x1,x2);
}
