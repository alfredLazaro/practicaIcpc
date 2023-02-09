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
    ll k,n,aux;
    ll nro;
    cin>>n>>k;
    aux=n/2;
    nro=-1;
    bool band=false;
    vector<int> listDiv;
    for(int i=1;i*i<=n;i++){ //recorre mientras no se 
        if(n%i==0){
            listDiv.pb(i);
            if(i*i!=n){ listDiv.pb(n/i);}
        }else{}
    }
    sort(listDiv.begin(),listDiv.end());
    if(k>listDiv.size()){
        cout<<-1<<endl;
    }else{
        cout<<listDiv[k-1]<<endl;
    }
    return 0;
}