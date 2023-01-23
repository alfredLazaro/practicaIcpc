#include <bits/stdc++.h>
using namespace std;
#define fori(i,ii,n) for(int i=ii;i<n;i++)
#define dfori(i,ii,s,n) for(int i==ii;i<n;i+=s)
#define nfori(i,n) for(int i=n;i>0;i--)
#define fast ios_base:: sync_with_stdio(false),cin.tie(0),cout.tie(0)
typedef long long int ll;
#define F first 
#define pb push_back
typedef unsigned long long int llnsi;
int main(){
    fast;
    map<int,string> m1;
    int n;
    m1[1]="1";
    fori(i,2,17){
        string act=m1[i-1];
        m1[i]=act+" "+to_string(i)+" "+act;
    }
    while(cin>>n){
        cout<<m1[n]<<endl;
    }
    return 0;
}