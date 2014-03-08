#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int source[10100];
int clone_[10100];
void count_cards(int n)
{
  int counter=0;
  for(int i=0;i<n;i++)
  {
      if(source[i]==clone_[i])
        counter++;
  }

  printf("%d",counter);
  return;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>source[i];
            clone_[i]=source[i];
        }
        sort(clone_,clone_+n);
        count_cards(n);
        if(t) printf("\n");
    }
}
