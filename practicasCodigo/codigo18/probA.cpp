#include <bits/stdc++.h>
using namespace std;
#define fori(i,ii,n) for(int i=ii;i<n;i++)
#define dfori(i,ii,s,n) for(int i==ii;i<n;i+=s)
#define nfori(i,n) for(int i=n;i>0;i--)
#define fast ios_base:: sync_with_stdio(false),cin.tie(0),cout.tie(0)
typedef long long int ll;
#define F first 
#define pb push_back
#define INF 2e18
typedef unsigned long long int llnsi;
int main(){
    fast;
    ll n,ai,num=INF,cant;
    cin>>n;
    cant=1;
    while(n--){
        cin>>ai;
        if(num>=ai){
            cant=1;
            num=ai;
        }else{
            num=ai;
            cant+=1;
        }
    }
    cout<<cant<<endl;
    return 0;
}