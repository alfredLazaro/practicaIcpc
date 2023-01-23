#include <bits/stdc++.h>
using namespace std;
#define fori(i,ii,n) for(int i=ii;i<n;i++)
#define rfor(i,n)    for(int i=n;i>0;i--)
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
int main(){
    fast;
    int n,k,max,cant;
    cin>>n>>k;
    vector<int> listaF(n),lista(k);
    max=0;
    fori(i,0,n){
        cin>>cant;
        if(cant>max){
            max=cant;
        }
        listaF[i]=cant;
    }
    fori(i,0,k){
        cin>>cant;
        lista[i]=cant;
    }
    bool esta=false;
    fori(i,0,k){
        int elem=lista[i];
        if(listaF[elem-1]==max){
            esta=true;
            break;
        }
    }
    if(esta){
        cout<<"Yes\n";
    }else{
        cout<<"No\n";
    }
    return 0;
}