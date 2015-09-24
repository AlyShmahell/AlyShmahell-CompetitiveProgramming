#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
char upper[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char sentence[1000000];
int counter[26];
void encode()
{ int counter=1;
    int length = strlen(sentence);
    for(int i=0;i<length;i++)
    {

       if(sentence[i]==sentence[i+1])
        counter++;
        else
       {

           printf("%c%d",sentence[i], counter);
           counter=1;
       }
    }
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        gets(sentence);
        encode();
        if(t) printf("\n");
    }
}
