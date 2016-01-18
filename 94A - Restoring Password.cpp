#include<bits/stdc++.h>
using namespace std;
int main()
{
    string password; // The Encrypted Password
    map <string,int> num; // a map of 10-bit numbers and their corresponding order
    cin>>password;
    for (int i=0; i<10; ++i)
    {
        string str;
        cin>>str;
        num[str]=i;
    }
    for (int i=0; i<8; ++i)
    {
        string substring(password,i*10 , 10) ; // each substring (10-bit number) of the password
        cout<<num[substring];
    }
    cout<<endl;
}
