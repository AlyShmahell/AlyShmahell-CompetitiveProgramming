/*
Copyright (c) 2016 Aly Shmahell

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
