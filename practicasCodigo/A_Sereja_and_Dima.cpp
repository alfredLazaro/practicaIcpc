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
#define end '\n'
#define INF 2e18
typedef pair<llnsi, llnsi> parll;
typedef pair<int, int> parInt;
int main(){
    fast;
    int tam,nroAc,v1,v2,sum,sum2,tam2;
    deque<int> bicola;
    cin>>tam;
    sum=0;
    sum2=0;
    tam2=tam;
    while(tam--){
        cin>>nroAc;
        bicola.push_back(nroAc);
    }
    bool b=true;
    fori(i,0,tam2){
        v1=bicola.front();
        v2=bicola.back();
        if(b){
            if(v1>v2){
            sum+=v1;
            bicola.pop_front();
            }else{
            sum+=v2;
            bicola.pop_back();
            }
            b=!b;
        }else{
            if(v1>v2){
                sum2+=v1;
                bicola.pop_front();
            }else{
                sum2+=v2;
                bicola.pop_back();
            }
            b=!b;
        }
    }
    cout<<sum<<" "<<sum2<<endl;
    return 0;
}