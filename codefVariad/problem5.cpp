#include <bits/stdc++.h>
using namespace std;
#define fori(i,ii,n) for(int i=ii;i<n;i++)
#define dfori(i,ii,s,n) for(int i==ii;i<n;i+=s)
#define nfori(i,n) for(int i=n;i>0;i--)
#define fast ios_base:: sync_with_stdio(false),cin.tie(0),cout.tie(0)
typedef long long int ll;
#define F first 
#define pb push_back
typedef unsigned long long int llnsi;

int main(){
    fast;
    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    int tem=arr[0];
    if(arr[0]<arr[1]){
        arr[0]=arr[1];
        arr[1]=tem;
        if(arr[1]<arr[2]){
            tem=arr[2];
            arr[2]=arr[1];
            arr[1]=tem;
        }
    }else if(arr[2]<arr[1]){
            tem=arr[2];
            arr[2]=arr[1];
            arr[1]=tem;
        }else{
            
        }
        fori(i,0,3){
            cout<<arr[i]<<",";
        }
    int sum=arr[2]-arr[1];
    sum= sum + (arr[1]-arr[0]);
    cout<<sum<<endl;
    return 0;
}