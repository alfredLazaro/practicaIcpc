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
    int ent,aux,cant,i;
    vector<int> arr;
    cant=0,i=3;
    arr.pb(0);
    arr.pb(1);
    arr.pb(2);
    while(cant<1001){
        aux=i%10;
        if(aux!=3 && i%3!=0){
            arr.pb(i);
            cant+=1;
        }else{
        }
        i+=1;
    }
    cin>>ent;
    int act;
    while(ent--){
        cin>>act;
        cout<<arr[act]<<endl;
    }
    return 0;
}