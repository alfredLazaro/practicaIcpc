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
    int arr[]={1,2,5,10,20,50};
    vector<int> listD;
    int cant,pagRes,pos=5;
    cin>>cant;
    while(cant>0){
        pagRes=cant-arr[pos];
        if(pagRes>=0){
            listD.pb(arr[pos]);
            cant=pagRes;
        }else{
            pos-=1;
        }
    }
    for(int a: listD){
        cout<<a<<" ";
    }
    return 0;
}