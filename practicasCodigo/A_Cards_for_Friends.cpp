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
int arr[]={1,2,5,10,20,50,100},arrC[]={5,10,20,50};

int main(){
    fast;
    int t,x,y,div,maxi;
    cin>>t;
    while(t--){
        int cant=1;
        cin>>x>>y>>div;
        maxi=max(x,y);
        fori(i,0,maxi){
            if(x%2==0 && x>1){
                x/=2;
                cant*=2;
            }else if(y%2==0 && y>1){
                y/=2;
                cant*=2;
            }else{}
        }
        if(cant>=div){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}