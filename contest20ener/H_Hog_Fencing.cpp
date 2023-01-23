#include <bits/stdc++.h>
using namespace std;
#define fori(i,ii,n) for(int i=ii;i<n;i++)
#define rfori(i,ii,n) for(int i=n;i>n;i--)
#define dfori(i,ii,s,n) for(int i=ii;i<n;i+=s)
#define F first 
#define S second 
#define pb push_back
typedef unsigned long long int llnsi;
#define parll pair<llnsi, llnsi> 
typedef long long int ll;
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define INF 2e18
int main(){
    fast;
    int t;
    int nro,arMax=0,p;
    ll n;
    cin>>t;
    p=t/2;
    nro=t/4;
    p-=nro;
    
    arMax=p*nro;
    /* if(nro!=1){
        nro*=4;
    }else{} */
    cout<<arMax;
    return 0;
}