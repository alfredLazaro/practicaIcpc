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
typedef pair<llnsi, llnsi> intPar;
int main(){
    fast;
    queue<llnsi> cola;
    deque<intPar> bicola;
    llnsi ntst,num,n,nro,nac;
    intPar actual;
    cin>>ntst;
    while(ntst--){
        cin>>num;
        if(num==1){
            cin>>n>>nro;
            llnsi sum=0;
            bicola.push_back(intPar(nro,n));
        }else{
            cin>>n;
            nac=0;
            actual=bicola.front();
            while(n>0){
                if(n>=actual.first){
                    nac+=(actual.first*actual.second);
                    n-=actual.first;
                    bicola.pop_front();
                }else{
                    actual.first-=n;
                    nac+=(n*actual.second);
                    n=0;
                    bicola.pop_front();
                    bicola.push_front(actual);
                }
                actual=bicola.front();
            }
            /* if(n>0){
                actual=bicola.front();
                nac+=(n*actual.second);
                actual.first-=n;
                //cout<<actual.first<<","<<actual.second;
                bicola.pop_front();
                bicola.push_front(actual);
            } */
            cout<<nac<<endl;
        }
        
    }
    return 0;
}