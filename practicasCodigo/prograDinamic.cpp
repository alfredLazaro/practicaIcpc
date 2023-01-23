#include <bits/stdc++.h>
#define fori(i,ii,n) for(int i=ii;i<n;i++)
#define nfori(i,ii,n) for(int i=n;i>ii;i--)
#define dfori(i,ii,s,n) for(int i=ii;i<n;i+=s)
#define pb push_back 
#define F first 
using namespace std;
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
typedef long long int ll;
typedef unsigned long long int llni;
int fibo(int);
int main(){
    fast;
    int numer;
    cin>>numer;
    int result=fibo(numer);
    cout<<result<<endl;
    return 0;
}
int fibo(int n){
    int res=0;
    if(n<=1){
        res=n;
    }else{
        res=fibo(n-1)+fibo(n-2);
    }
    return 0;
}