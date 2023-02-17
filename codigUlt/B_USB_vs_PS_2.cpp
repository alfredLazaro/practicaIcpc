#include <bits/stdc++.h>
using namespace std;
#define fori(i,ii,n) for(int i=ii;i<n;i++)
#define rfori(i,ii,n) for(int i=n;i>=ii;i--)
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
typedef pair<int,string> parS;
int main(){
    fast;
    map<int,string> listUsb,lisPs;
    int a,b,c,cant,mi,tam,res,prec,sumUsb=0,sumPs=0;
    string type;
    cin>>a>>b>>c;
    cin>>cant;
    priority_queue<int> cUsb,cPs;
    sumUsb=0;
    sumPs=0;
    fori(i,0,cant){
        cin>>mi;
        cin>>type;
        if(type=="USB"){
            cUsb.push(mi);
            sumUsb+=1;
        }else{
            cPs.push(mi);
            sumPs+=1;
        }
    }
    tam=cUsb.size();
    cant=cant-tam;
    res=0,prec=0;
    int aux=a+c;
    while(tam--){
        if(a>0){
            prec+=cUsb.top();
            cUsb.pop();
            a-=1;
            res+=1;
        }else{
            break;
        }
    }
    while(cant--){
        if(b>0){
            prec+=cPs.top();
            cPs.pop();
            b-=1;
            res+=1;
        }else{
            break;
        }
    }
    while(tam>0 || cant>0){
        if(tam>0 && cant>0){
            aux=cUsb.top();
            if(aux>cPs.top()){
                prec+=aux;
                cUsb.pop();
                res+=1;
            }else{
                prec+=cPs.top();
                cPs.pop();
                res+=1;
            }
        }else if(tam>0){

        }
    }
    return 0;
}