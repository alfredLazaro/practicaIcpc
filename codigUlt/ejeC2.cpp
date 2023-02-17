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
    ll t,n,k,act,aux,sum;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<parInt> arr(n),indi(n);
        fori(i,0,n){
            cin>>act;
            arr[i]=parInt(act,0);
        }
        fori(i,0,n){
            cin>>act;
            indi[i]=parInt((act-arr[i].first),i);
            arr[i].second=act;
        }
        sort(indi.begin(),indi.end());
        k=n-k;
        nfori(i,k,n-1){
            aux=arr[indi[i].second].first;
            if(indi[i].first<=0){
                break;
            }
            arr[indi[i].second].first=arr[indi[i].second].second;
            //arr[i].second=aux;
        }
        sum=0;
        fori(i,0,n){
            sum+=arr[i].first;
            //cout<<arr[i].first<<", ";
        }
        //cout<<endl;
        cout<<sum<<endl;
    }
    return 0;
}