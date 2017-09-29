#include <iostream>
#include <stdint.h>
#include <queue>
#include <array>
#include <vector>

using namespace std;

#define inf 2e18

typedef long long int lli;

void trace(lli endVertex, lli* source)
{
    if(source[endVertex]!=-1)
        trace(source[endVertex],source);
    cout<<endVertex<<" ";
}

int main()
{
    lli n,m,a,b,c;
    cin>>n>>m;

    vector<array<lli,2> > graph[n+1]; // graph{vector{array{adjacentVertex, weight}}}
    for(lli i=0; i<m; i++)
    {
        cin>>a>>b>>c;
        graph[a].push_back({b,c});
        graph[b].push_back({a,c});
    }

    lli distance[n+11];
    fill(distance,distance+n+10,inf);
    lli source[n+11];
    fill(source,source+n+10,-1);

    priority_queue <array<lli,2>, vector<array<lli,2> >, less<array<lli,2> > > pq; // pq{array{distance,vertex}}
    pq.push({1,distance[1]=0});

    lli cv; // CurrentVertex
    while(!pq.empty())
    {
        cv = pq.top()[0];
        pq.pop();

        for(auto adj/*adjacentVertex*/: graph[cv])
        {
            if(distance[adj[0]]>distance[cv]+adj[1])
            {
                distance[adj[0]] = distance[cv]+adj[1];
                pq.push({adj[0],distance[adj[0]]});
                source[adj[0]] = cv;
            }
        }
    }

    if(source[n]==-1)
    {
        cout<<-1;
        return 0;
    }
    trace(n, source);
}
