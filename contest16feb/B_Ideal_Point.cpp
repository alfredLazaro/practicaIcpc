#include <bits/stdc++.h>
using namespace std;
#define fori(i,ii,n) for(int i=ii;i<n;i++)
#define nfori(i,ii,n) for(int i=n;i>=ii;i--)
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
typedef pair<string,int> parS;
int main(){
    fast;
    int t,n,k,x,y;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<int> arr(51,0);
        fori(i,0,n){
            cin>>x>>y;
            if(x<=k && y>=k){ //mientras x sea menor a el punto y y mayor al punto para ocupar el rango xd
                fori(j,x,y+1){
                    arr[j]++; //sumamos 1 al 
                }
            }
        }
        bool b=true;
        fori(i,1,51){
            if(i!=k){
                b &=arr[k]>arr[i];
            }
        }
        if(b){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}