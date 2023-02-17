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
    int t,n,act;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> arr(n);
        fori(i,0,n){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        bool b=true;
        int aux=arr[0];
        fori(i,1,n){
            act=arr[i];
            if(act-aux<=1){
                aux=act;
            }else{
                b=false;
                break;
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