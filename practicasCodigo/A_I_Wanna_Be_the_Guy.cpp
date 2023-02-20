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
    int aux,cant,p,q;
    cin>>cant;
    cant+=1;
    bool arr[cant]{false};
    cin>>p;
    fori(i,0,p){
        cin>>aux;
        arr[aux]=true;
    }
    cin>>q;
    fori(i,0,q){
        cin>>aux;
        arr[aux]=true;
    }
    bool todo=true;
    fori(i,1,cant){
        if(!arr[i]){
            todo=false;
            break;
        }else{}
    }
    if(todo){
        cout<<"I become the guy."<<endl;
    }else{
        cout<<"Oh, my keyboard!"<<endl;
    }
    return 0;
}