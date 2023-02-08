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
    sumUsb=0;
    sumPs=0;
    fori(i,0,cant){
        cin>>mi;
        cin>>type;
        if(type=="USB"){
            listUsb.insert(parS(mi,type));
            sumUsb+=1;
        }else{
            lisPs.insert(parS(mi,type));
            sumPs+=1;
        }
    }
    tam=listUsb.size();
    cant=cant-tam;
    res=0,prec=0;
    int aux=a+c;
    for(auto cs:listUsb){
        if(a>0){
            res+=1;
            prec+=cs.first;
            a-=1;
            
        }else{
            break;
        }
    }

    return 0;
}