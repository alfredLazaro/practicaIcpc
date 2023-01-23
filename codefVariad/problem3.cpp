#include <bits/stdc++.h>
using namespace std;
#define fori(i,ii,n) for(int i=ii;i<n;i++)
#define forie(i,ii,n) for(int i=ii;i<=n;i++)
#define nfori(i,n) for(int i=n;i>0;i--)
#define dfori(i,ii,n) for(int i=ii;i<n;i+=2)
#define endl '\n'
typedef long long int ll;
#define pb push_back
#define F first 
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
const int MOD = 100000007;
const int MAX = 1000001;
bool primos[MAX];
void criba(){
    int i,j;
    primos[0]=primos[1]=true;
    dfori(i,4,MAX){
        primos[i]=true;
    }
    for(i=3;i*i<=MAX;i+=2){
        if(!primos[i]){
            for(j=i*i;j<MAX;j+=2*i){
                primos[j]=true;
            }
        }else{}
    }
}
int main(){
    //fast;
    criba();
    int tam;
    ll numer,raiz;
    cin>>tam;
    while(tam--){
        cin>>numer;
        raiz=sqrt(numer);
        if(!primos[raiz] && raiz*raiz==numer){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}