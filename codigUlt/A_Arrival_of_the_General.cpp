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
    int n,t,act,aux,max,min,sum;
    cin>>n;
    vector<int> arr(n);
    cin>>aux;
    min=1;
    arr[0]=aux;
    fori(i,1,n){
        cin>>act;
        arr[i]=act;
        if(act<=aux){
            aux=act;
            min=i+1;
        }else{

        }
    }
    aux=arr[n-1];
    max=n-1;
    nfori(i,0,n-2){
        act=arr[i];
        if(act>=aux){
            aux=act;
            max=i;
        }
    }
    /* if(max==1){
            max=0;
        } */
    if(max<min){
        sum=(max)+(n-min);
    }else{
        sum=((max)+(n-min))-1;
    }
    cout<<sum<<endl;
    return 0;
}