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
