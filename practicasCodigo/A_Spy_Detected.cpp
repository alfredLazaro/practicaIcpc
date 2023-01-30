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
    int t,n,act,ind,cant,max;
    cin>>t;
    while(t--){
        cin>>n;
        cant=0;
        int arr[n];
        cin>>act;
        fori(i,1,n){
            cin>>arr[i];
            if(act==arr[i]){
                cant+=1;
                act=arr[i];
            }else{
                ind=i;
                //max=arr[i];
                act=arr[i];
            }
        }
        if(act!=arr[ind] ){
            ind+=1;
        }
        cout<<ind<<endl;
    }
    return 0;
}