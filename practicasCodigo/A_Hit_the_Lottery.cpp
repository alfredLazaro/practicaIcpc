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
    ll cant,aux,cantAc;
    ll arr[5]={1,5,10,20,100};
    int indU=4,sum;
    cin>>cant;
    sum=0;
    while(cant>0){
        aux=cant-arr[indU];
        if(aux>=0){
            cant=aux;
            sum+=1;
        }else{
            indU-=1;
        }
    }
    cout<<sum<<endl;
    return 0;
}