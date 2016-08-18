#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char name[7]= {'a','c','e','i','k','n','t'};
	int n;

	scanf("%d",&n);
	char sentence[n];
	int counter=n;
	getchar();
	for(int i=0; i<n+1; i++)
		sentence[i]=getchar();

	for(int i=1; i<counter; i++)
		for(int j=0; j<7; j++)
		{
			if(sentence[i]==name[j])
			{
				for(int k=counter; k>=1; k--)
				{
					for(int l=0; l<7; l++)
					{

						if(sentence[k]==name[l])
						{
							char temp = sentence[k];
							sentence[k] = sentence[i];
							sentence[i] = temp;
							counter = k-1;
							l=8;
							k=-1;
							j=8;
						}

					}
				}
			}

		}
	for(int i=1; i<=n; i++)
		printf("%c",sentence[i]);
}
