#include <bits/stdc++.h>
using namespace std;
#define fori(i,ii,n) for(int i=ii;i<n;i++)
#define rfori(i,ii,n) for(int i=n;i>ii;i--)
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
int main(){
    fast;
    llnsi nro; 
    cin>>nro; 
    nro+=1;
    //bool es=((ceil(log2(nro))==floor(log2(nro))));

    if(nro==1){
        cout<<0<<endl;
    }else if(nro&1){
        cout<<nro<<endl;
    }else{
        cout<<nro/2<<endl;
    }
    return 0;
}