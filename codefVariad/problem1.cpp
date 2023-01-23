#include <bits/stdc++.h>
using namespace std;
#define fori(i,ii,n) for(int i=ii;i<n;i++)
#define rforn(i,n) for(int i=n;i>0;i--)
#define dfori(i,ii,n) for(int i=ii;i<n;i=i+2)
typedef long long int ll; 
#define fast ios_base:: sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define F first
#define pb push_back
#define max 100
int main(){
    fast;
    vector<int> arr;
    string num;
    char sum;
    
        bool b=true;
        cin>>num;
        dfori(i,0,num.size()){
                arr.pb(num[i]-'0');
            
        }
    sort(arr.begin(),arr.end());
    fori(j,0,arr.size()-1){
        cout<<arr[j]<<'+';
    }
    cout<<arr[arr.size()-1];
    return 0;
}
