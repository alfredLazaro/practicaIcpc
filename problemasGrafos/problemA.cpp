#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define endl '\n'
#define fori(i,ii,n) for(int i=ii;i<n;i++)
#define F first 
#define pb push_back
typedef long long int ll;
int A;
void dfs(int r,bool *vis,vector<vector<int>> &g){
    vis[r]=true; 
    //cout<<g[r][0]<<' ';
    A++;    //contamos los visitados
    fori(i,0,g[r].size())
        if(!vis[g[r][i]])
            dfs(g[r][i],vis,g);
            
}
int main(){
    fast;
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> g(n+1);
        while(m--){
            int x,y;
            cin>>x>>y;
            g[x].pb(y);
            g[y].pb(x); //si es mi amigo yo soy su amigo
        }
        /* cout<<"lista de nodos: \n";
        fori(i,1,n+1){
            cout<<i<<"->";
            fori(j,0,g[i].size()){
                cout<<g[i][j]<<' ';
            }
            cout<<endl;
        } */

        int mac  =-1;
        bool aux[n+1];
        fori(i,1,n+1) aux[i]=false;
        fori(i,0,n+1){ //
            A=0;
            if(!aux[i])dfs(i,aux,g);
            cout<<i<<"->"<<A<<endl;
            mac =max(mac,A);
        }
        cout<<mac<<endl;
        
    }
    return 0;
}