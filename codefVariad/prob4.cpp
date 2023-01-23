#include <bits/stdc++.h>
using namespace std;
#define fori(i,ii,n) for(int i=ii;i<n;i++)
#define dfori(i,ii,n) for(int i=ii;i<n;i+=2)
#define nfori(i,n) for(int i=n;i>0;i--)
#define pb push_back
#define F first 
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
//#define pp pair(in)
typedef long long int ll;
const ll MAX=100000;
ll MAT[11];
void llenaMat();
int main(){
    fast;
    int nEje,tiem,rest;
    llenaMat();
    cin>>nEje>>tiem;
    nfori(i,nEje){
        rest=240-tiem; 
        if(MAT[i]<=rest){
            cout<<i<<endl;
            break;
        }else{

        }
    }
    
    
}
void llenaMat(){
    fori(i,1,11){
        MAT[i]=5*i+MAT[i-1];

    }
}