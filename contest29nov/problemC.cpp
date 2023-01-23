#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
 
#define ll                    long long
#define ld                    long double
#define mp                    make_pair
#define pb                    push_back
#define fi                    first
#define se                    second
#define INF                   2e18
#define all(x)                (x).begin(), (x).end()
#define sz(x)                 ((int)(x).size())
#define forn(i,n)             for(int i = 0; i < n; i++)
#define fore(i,b,e)           for(int i = b; i < e; i++)
#define forg(i,b,e,m)         for(int i = b; i < e; i+=m)
#define rforn(i,n)            for(int i = n; i >= 0; i--)
#define rfore(i,b,e)          for(int i = b; i >= e; i--)
#define rforg(i,b,e,m)        for(int i = s; i >= e; i-=m)
#define endl                  "\n"
#define MOD                   1000000007
#define fast_cin()            ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
 

int main(){
    fast_cin();
    //freopen("input.in", "r", stdin);
    //freopen("output.out", "w", stdout);
    int n,m,res;
    char aux;
    bool enc;
    cin>>n>>m;
        enc=false;
        pair<int,int> p2,p1;
        char matr[n][m];
        forn(i,n){
            forn(j,m){
                cin>>aux;
                matr[i][j]=aux;
                if(aux=='o'){
                    if(enc){
                         p2 = make_pair(i,j);
                    }else{
                         p1 = make_pair(i,j);
                        enc=true;
                    }
                }else{}
            }
        }
        res=(abs(p2.first-p1.first))+(abs(p2.second-p1.second));
        cout<<res<<'\n';
    
    //vector<int> listaN(n)(m);
    
    return 0;
}