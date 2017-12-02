#include <iostream>
#include <stdio.h>
#include <queue>
#include <algorithm>
#include <array>

using namespace std;

vector<array<int64_t,3> > input;
vector<array<int64_t,2> > MSTs;
bool used[100001];

/**
 * Finds a cycle (union of 2 vertices) in a graph
 */
vector<int64_t> vertices;
bool unitFind(int64_t a, int64_t b)
{
    int unit = -2;
    for(int64_t i: vertices)
    {
        if(i==a||i==b)
            unit++;
        if(!unit)
            return false;
    }
    return true;
}
/**/

bool uniqueAndUsed(array<int64_t,3> vertex)
{
    vector<array<int64_t,3> >::iterator itrtr;
    itrtr = unique(input.begin(), input.end(), [](const array<int64_t,3>& a, const array<int64_t,3>& b)
    {
        return a[2] == b[2];
    });
    return used[distance(input.begin(),itrtr)];
}

void kruskal()
{

}

int main()
{
    // inputs first line
    int64_t m,n;
    cin>>n>>m;

    // inputs vertices
    int64_t src,trgt,wght;
    for(int64_t i=0; i<m; i++)
    {
        cin>>src>>trgt>>wght;
        input.push_back({src,trgt,wght});
    }

    // sorts vertices from lowest weight to highest weight
    sort(input.begin(),input.begin()+m,[](const array<int64_t,3>& a, const array<int64_t,3>& b)
    {
        return a[2] < b[2];
    });

    used[0] = 1;

    cout<<uniqueAndUsed({1,2,2});
}
