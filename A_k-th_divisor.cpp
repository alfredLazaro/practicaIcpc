#include <bits/stdc++.h>
using namespace std;
#define fori(i,ii,n) for(int i=ii;i<n;i++)
#define rfori(i,ii,n) for(int i=n;i>=ii;i--)
#define dfori(i,ii,s,n) for(int i=ii;i<n;i+=s)
#define pb push_back
#define F first
#define S second 
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long int 
#define llnsi unsigned long long int
#define endl '\n'
#define INF 2e18
typedef pair<llnsi, llnsi> parll;
typedef pair<int, int> parInt;
typedef pair<string,int> parS;
int main(){
    fast;
    string cad;
    llnsi k,n,aux;
    ll nro;
    cin>>n>>k;
    aux=n/2;
    nro=-1;
    bool band=false;
    if(n!=1){
    while(k<=aux){
        if(n%k==0){
            band=true;
            nro=k;
            break;
        }
        k+=1;
    }
    }else{
        nro=1;
    }
    cout<<nro<<endl;
    return 0;
}