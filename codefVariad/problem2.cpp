#include <bits/stdc++.h>
using namespace std;
#define fori(i,ii,n) for(int  i=ii;i<n;i++)
#define nfori(i,n) for(int i=n;i>0;i--)
#define dfori(i,ii,n) for(int i=ii;i<n;i+=2)
#define pb push_back
#define F first 
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
int main(){
    fast;
    string cad;
    int tam;
    set<char> abcd;
    cin>>tam>>cad;
    fori(i,0,tam){
        cad[i]=tolower(cad[i]);
        abcd.insert(cad[i]);
    }
    if(abcd.size()==26){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
        //cout<<abcd.size();
    }
    /* sort(cad.begin(),cad.end());
    cout<<cad<<endl; */

    return 0;
}