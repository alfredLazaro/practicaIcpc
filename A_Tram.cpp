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
    int t,p,s,sum;
    cin>>t;
    sum=0;
    bool band=true;
    
    vector<int> arr(t);
    t-=1;
    cin>>p>>s;
    sum=s;
    arr[t]=sum;
    rfori(i,0,t-1){
        cin>>p>>s;
        sum-=p;
        sum+=s;
        arr[i]=sum;
    }
    sort(arr.begin(),arr.end());
    cout<<arr[t]<<endl;
    return 0;
}