#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
char lower[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char upper[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char sentence[1000000];
void encode(int n)
{
    int length = strlen(sentence);
    for(int i=0;i<length;i++)
    {
        if(sentence[i]==lower[sentence[i]-'a'])
        {
            //cout<<sentence[i]-'a';
            sentence[i]=(upper[(sentence[i]-'a'+n)%26]);
            //cout<<sentence[i];
        }
        else if(sentence[i]==upper[sentence[i]-'A'])
        {
            sentence[i]=(lower[(sentence[i]-'A'+n)%26]);
        }
        else if(sentence[i]==' ')
            continue;
    }
    sentence[length+1]='\0';
    return;
}
void print()
{
    int i=0;
    while(sentence[i]!='\0')
    {
      printf("%c",sentence[i]);
      i++;
    }
    return;
}
int main()
{
    int t,m,n;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        cin>>m>>n;
        cin.ignore();
        gets(sentence);
        encode(n);
        print();
        if(t) printf("\n");
    }
}
