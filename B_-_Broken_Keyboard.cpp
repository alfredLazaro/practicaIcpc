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
    string cad;
    cin>>t;
    while(t--){
        bool fail=false;
        cin>>nro>>cad;
        int count=0;
        if(nro!=2){
        fori(i,1,nro){
            int mas=i+1;
            if(i%3!=0 && (mas)<nro){
                if(cad[i]!=cad[mas]){
                    fail=true;
                    break;
                }else{
                    
                }
                i+=2; //se pasa el i+1
            }else{
            }
        }
        }else{
            fail=true;
        }
        if(fail){ //hay inconsistencia
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}