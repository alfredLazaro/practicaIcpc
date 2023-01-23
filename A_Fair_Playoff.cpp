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
typedef pair<int, int> parInt; 
typedef long long int ll;
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define INF 2e18
int main(){
    fast;
    int t;
    
    cin>>t;
    vector<int> arr(4);
    while(t--){
        parInt primer;
        fori(i,0,4){
            cin>>arr[i];
        }
        int pri=max(arr[0],arr[1]);
        int seg=max(arr[2],arr[3]);
        //cout<<"pri"<<pri<<"seg"<<seg<<endl;
        int maxim=max(pri,seg);
        int minin=min(pri,seg);
        sort(arr.begin(),arr.end());
        if((pri==arr[2] || pri==arr[3]) && (seg==arr[2] || seg==arr[3])){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}