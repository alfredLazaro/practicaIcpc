#include <bits/stdc++.h>
using namespace std;
#define fori(i,ii,n) for(int i=ii; i<n; i++)
#define nfori(i,ii,n) for(int i=n;i>=ii;i--)
#define dfori(i,ii,s,n) for(int i=ii;i<n;i+=s)

#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define lnsi unsigned long long int
#define INF 2e18
#define maxI INT_MAX
#define fast ios_base:: sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define pint pair<int,int>
#define pist pair<int,string>
#define V 6
int minim(int dist[],bool sptSet[]);

void printSolution(int dist[]);
void dijkstra(int graph[][V],int src);
int main(){
    fast;
    int graph[V][V]={
        {0,1,0,0,7,5},
        {1,0,1,5,6,0},
        {0,1,0,1,0,0},
        {0,5,1,0,9,0},
        {7,6,0,9,0,3},
        {5,0,0,0,3,0}
    };
    dijkstra(graph,0);
    return 0;
}
int minim(int dist[],bool sptSet[]){
    int min=maxI,minIndex;
    fori(i,0,V){
        if(!sptSet[i]&&dist[i]<=min){
            min=dist[i];
            minIndex=i;
        }else{}
    }
    return minIndex;
}
void printSolution(int dist[]){
     cout<<"Vertex \t distance from source"<<endl;
     fori(i,0,V){
        cout<<i<<" \t\t"<<dist[i]<<endl;
     }
}
void dijkstra(int graph[][V],int src){
    int dist[V];
    bool sptSet[V];
    fori(i,0,V){
        dist[i]=maxI;
        sptSet[i]=false;
    }
    dist[src]=0;
    fori(i,0,V-1){
        int u=minim(dist,sptSet);
        sptSet[u]=true;
        fori(v,0,V){
            if(!sptSet[v] && graph[u][v] && dist[u]!=maxI && dist[u]+graph[u][v]<dist[v]){
                dist[v]=dist[u]+graph[u][v];
            }
        }
    }
    printSolution(dist);
}