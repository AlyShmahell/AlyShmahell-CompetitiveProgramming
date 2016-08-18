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
