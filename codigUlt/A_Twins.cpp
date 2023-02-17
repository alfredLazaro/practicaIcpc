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

int main(){
    fast;
    int cant,sum,nro,cont;
    cin>>cant; 
    vector<int> arra(cant);
    sum=0;
    fori(i,0,cant){
        cin>>nro;
        sum+=nro;
        arra[i]=nro;
    }
    sort(arra.begin(),arra.end());
    
    //cout<<sum<<"sum";
    int x=0;
    cont=0;
    if(sum%2==0){
        sum/=2;
    }else{
        sum/=2;
        sum+=1;
    }
        rfori(i,0,cant-1){
            x+=arra[i];
            if(x<=sum){
                cont+=1;
            }else{
                cont+=1;
                break;
            }
        }
        /* 
        int i=cant-1;
        while(sum>=x){
            x+=arra[i];
            sum-=x;
            cont+=1;
            i--;
        } */
        cout<<cont<<endl;
    return 0;
}