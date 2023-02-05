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
    set<char> lista;
    lista.insert('H');
    lista.insert('Q');
    lista.insert('9');
    //lista.insert('+');
    bool b=false;
    fori(i,0,tam){
        if(lista.count(cad[i])){
            b=true;
            break;
        }else{}
    }
    if(b){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}