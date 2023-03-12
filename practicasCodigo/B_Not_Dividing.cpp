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
#define vi vector<int>
typedef pair<llnsi, llnsi> parll;
typedef pair<int, int> parInt;
int main(){
    fast;
    int t,tam,nro;
    cin>>t;
    while(t--){
        cin>>tam;
        vi arr(tam);
        fori(i,0,tam){
            cin>>nro;
            if(nro==1){
                nro+=1;
            }else{}
            arr[i]=nro;
        }
        fori(i,0,tam-1){
            if(arr[i+1]%arr[i]==0){
                arr[i+1]+=1;
            }else{
            }
        }
        fori(i,0,tam){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}