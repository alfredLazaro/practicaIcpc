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
    int n;
    string arr[101];
    string c1,c2,c3,c4,act="";
    c1="I love it";
    c2="I hate it";
    c3="I love that ";
    c4="I hate that ";
    bool b=true;
    arr[0]=c2;
    fori(i,1,101){
        
        //rfori(j,1,i){
            if(b){
                act=act+c4;
                b=!b;
            }else{
                act=act+c3;
                b=!b;
            }
        //}
        if(b){
            arr[i]=act+c2;
        }else{
            arr[i]= act+c1;
        }
    }
    
    cin>>n;
    cout<<arr[n-1]<<endl;
    return 0;
}