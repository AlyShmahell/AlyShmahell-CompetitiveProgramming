#include <stdio.h>
#include <string.h>

int main()
{
    char T[600];
    int counter=0;
    while (((T[counter] = getchar()) != '\n') && (T[counter] != EOF))
        counter++;
    for(int i=0; i<counter; i++)
    {
        printf("%c",T[i]);
        if(T[i]==',')
            printf(" ");
        if(T[i]=='.')
        {
            printf(" ");
            if(T[i+1]>90)
            {
                printf("%c",(char)((int)T[i+1]-32));
                i++;
            }
        }
    }
    return 0;
}
