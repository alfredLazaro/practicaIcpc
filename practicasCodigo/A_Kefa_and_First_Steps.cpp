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
    int tam,act,aux,cont;
    cin>>tam;
    int arr[tam];
    cont=aux=1;
    vector<int> arCant;
    fori(i,0,tam){
        cin>>arr[i];
    }
    fori(i,1,tam){
        if(arr[i]<arr[i-1]){
            arCant.pb(cont);
            cont=1;
        }else{
            cont+=1;
        }
    }
    arCant.pb(cont);
    sort(arCant.begin(),arCant.end());
    //int ult=arCant[2];
    cout<<arCant.back()<<endl;
    return 0;
}