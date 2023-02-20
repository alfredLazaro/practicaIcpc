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
#define endl '\n'
#define INF 2e18
typedef pair<llnsi, llnsi> parll;
typedef pair<int, int> parInt;
int main(){
    fast;
    int tam,k,aux; 
    cin>>tam>>k;
    vector<int> arr(tam);
    fori(i,0,tam){
        cin>>aux;
        arr[i]=aux+k;
    }
    sort(arr.begin(),arr.end());
    int teams=0;
    bool entra=true;
    dfori(i,0,3,tam){
        fori(j,i,i+3){ //puede que se salga del arreglo eso no esta bien
            if(arr[j]>5){
                entra=false;
                break;
            }else{}
        }
        if(entra){
            teams+=1;
        }else{
            entra=true;
        }
    }
    cout<<teams<<endl;
    return 0;
}