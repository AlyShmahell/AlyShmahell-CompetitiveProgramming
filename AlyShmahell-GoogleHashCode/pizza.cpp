/*
    Copyright (c) 2017 Aly Shmahell
    All Rights Reserved
*/

/*
    Problem: Pizza
    Competition: Google Hash Code
    Year: 2017
    Round: Practice Session
*/

/*
    Status: unfinished
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <iostream>
#include <vector>
using namespace std;


void sliceAndDine()
{
    FILE* input = fopen("example.in","r");
    if(input==NULL)
    {
        printf("card not present\n");
        return;
    }
    /**
     * inputing metadata about the pizza
     */
    int receipt[4];
    for(int i=0; i<4; i++)
    {
        fscanf(input," %d",&receipt[i]);
    }
    /**
     * inputing actual data about the pizza itself
     */
    pair<int,int> pizza[100][100];
    for(int i=0; i<receipt[0]; i++)
    {
        for(int j=0; j<receipt[1]; j++)
        {
            /**
             * buffering from input
             */
            //
            char tempCharBuffer;
            fscanf(input," %c",&tempCharBuffer);
            /**
             * checking the slice type
             */
            int tempTomatoBuffer = 0;
            int tempMushroomBuffer = 0;
            if(tempCharBuffer=='T')
                tempTomatoBuffer++;
            else
                tempMushroomBuffer++;
            /**
             * calculating total number of slices in section
             */
            if(i>0)
            {
                tempTomatoBuffer+=pizza[i-1][j].first;
                tempMushroomBuffer+=pizza[i-1][j].second;
            }

            if(j>0)
            {
                tempTomatoBuffer+=pizza[i][j-1].first;
                tempMushroomBuffer+=pizza[i][j-1].second;
            }

            if(i>0&&j>0)
            {
                tempTomatoBuffer-=pizza[i-1][j-1].first;
                tempMushroomBuffer-=pizza[i-1][j-1].second;
            }
            pizza[i][j].first = tempTomatoBuffer;
            pizza[i][j].second = tempMushroomBuffer;
        }
    }
    for(int i=0; i<receipt[0]; i++)
    {
        for(int j=0; j<receipt[1]; j++)
        {
            cout<<pizza[i][j].first<<"/"<<pizza[i][j].second<<" ";
        }
        cout<<endl;
    }
}


int main(int argc, char* argv[])
{
    sliceAndDine();
}
