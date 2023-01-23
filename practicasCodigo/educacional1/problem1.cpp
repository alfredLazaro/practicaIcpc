#include <bits/stdc++.h>
using namespace std;
#define fori(i,ii,n) for(int i=ii;i<n;i++)
#define rfori(i,ii,n) for(int i=n;i>n;i--)
#define dfori(i,ii,s,n) for(int i=ii;i<n;i+=s)
#define F first 
#define S second 
#define pb push_back
typedef unsigned long long int llnsi;
#define parll pair<llnsi, llnsi> 
typedef long long int ll;
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define INF 2e18
//bool mpow[100000000]{false}; //es muy grande 
//llnsi sumas[INT_MAX]{0};  //es grande y por eso tarda harto
map<int,int> mpow;
map<ll,ll> sumMax;
int max=0;
void potencias();
llnsi sumatorias(int,llnsi);
int suma(int,int);
int main(){
    fast;
    int t;
    llnsi nro;
    potencias();
    llnsi resp=0;
    //sumas[0]=-1;
    cin>>t;
    while(t--){
        cin>>nro;
        //
        resp=sumatorias(nro,0);
        cout<<resp<<endl;
    }
    return 0;
}
void potencias(){
    int tam=INT_MAX,act=1,i=0;
    //mpow[1]=true;
    //cout<<i<<"  ";
    while(i<30){
        act=pow(2,i);
        mpow[act]=i;
        i+=1;
        //cout<<act<<" ";
    }
}
llnsi sumatorias(int n,llnsi i){
    llnsi res=0;
    if(sumMax.count(n)){
        return sumMax[n];
    }else{}
    if(n<=1){
        i=-3;
    }else{
        //(mpow.count(n))? i-=sumatorias(n-1,i):i+=sumatorias(n-1,i);
        if(mpow.count(n)){
            i=n-sumatorias(n-1,i);
        }else{
            i=n+sumatorias(n-1,i);
        }
    }
    sumMax[n]=i;
    return i;
}
int suma(int t,int sum){
    //int res=0;
    if(t<=1){
        sum=1;
    }else{
        sum=t+suma(t-1,sum);
    }
    return sum;
}