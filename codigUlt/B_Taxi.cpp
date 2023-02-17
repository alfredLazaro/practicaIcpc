#include <bits/stdc++.h>
using namespace std;
#define fori(i,ii,n) for(int i=ii;i<n;i++)
#define nfori(i,ii,n) for(int i=n;i>=ii;i--)
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
    int tam,act,arr,cant,aux,sum;
    cin>>tam;
    sum=0;
    fori(i,0,tam){
        cin>>act;
        sum+=act;
    }
    if(sum%4==0){
        sum/=4;
    }else{
        sum/=4;
        sum+=1;
    }
    cout<<sum<<endl;
    return 0;
}