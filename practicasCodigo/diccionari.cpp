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
typedef pair<string,int> parS;
int main(){
    fast;
    string cad;
    int tam;
    vector<string> list;
    unordered_multimap<string,int> ordend;
    set<string> lista;
    while(cin>>cad){
        if(cad=="#"){
            break;
        }
        list.pb(cad);
    }
    tam=list.size();
    fori(i,0,tam){
        cad=list[i];
        int tamcad=cad.size();
        fori(j,0,tamcad){
            cad[j]=tolower(cad[j]);
        }
        sort(cad.begin(),cad.end());
        ordend.insert(parS(cad,i));
    }
    int tams=ordend.size();
    for(auto a:ordend){
        if(ordend.count(a.first)>1){
            list[a.second]="";
        }
    }
    sort(list.begin(),list.end());
    fori(i,0,tam){
        if(list[i]!=""){
            cout<<list[i]<<endl;
        }
    }

    return 0;
}