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
    string cad;
    cin>>cad;
    int tam=cad.size();
    char act;
    stack<char> pil;
    pil.push('o');
    pil.push('l');
    pil.push('l');
    pil.push('e');
    pil.push('h');
    bool band=false;
    fori(i,0,tam){
        act=pil.top();
        if(cad[i]==act){
            pil.pop();
            if(pil.empty()){
                band=true;
                break;
            }
        }else{}
    }
    if(band){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}