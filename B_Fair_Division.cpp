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
    int t,nro,act;
    
    cin>>t;
    while(t--){
        int arr[3]{0};
        cin>>nro;
        fori(i,0,nro){
            cin>>act;
            if(act==1){
                arr[1]+=1;
            }else{
                arr[2]+=1;
            }
        }
        int uno=arr[1],dos=arr[2];
        int sum=uno+(dos*2);
        if(sum%2==0){
            if(uno>0){
                cout<<"YES"<<endl;
            }else if(dos%2!=0){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }
    }
    //arr[1]%2==0&& arr[2]%2==0
    return 0;
}