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
#include<string>
using namespace std;


int main()
{
    string t1;
    int t2;
    cin>>t2;
    cin.ignore();
    while(t2--)
    {
        int store_a[26]= {0};
        int store_b[26]= {0};
        int i,temp;
        string a,b;
        getline(cin,a);
        getline(cin,b);
        i=0;
        while(i<a.size())
        {
            temp = a[i]-'a';
            store_a[temp]++;
            i++;
        }
        i=0;
        while(i<b.size())
        {
            temp = b[i]-'a';
            store_b[temp]++;
            i++;
        }
        temp=0;
        for( i=0; i<26; i++)
           {
               //cout<<store_a[i]<<" "<<store_b[i]<<endl;
               if(store_a[i]>store_b[i])
                temp+=(store_a[i]-store_b[i]);
            else if(store_a[i]<store_b[i])
                temp+=(store_b[i]-store_a[i]);
           }
                cout<<temp<<endl;
    }
}