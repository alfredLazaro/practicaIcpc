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
#define endl '\n'
#define INF 2e18
#define vi vector<int>
#define vs vector<string>
#define pris pair<int,string>
#define psr pair<string,int>
typedef pair<llnsi, llnsi> parll;
typedef pair<int, int> parInt;
int main(){
    fast;
    int t,tam;
    string act;
    cin>>t;
    while(t--){
        cin>>tam;
        set<psr> list;
        int cont=0,tamCad=0;
        int nrosuf=(tam*2)-2;
        vs arr(nrosuf,"");
        bool encont=false;
        fori(i,0,nrosuf){
            cin>>act;
            tamCad=act.size();
            if(arr[tamCad]!=""){
                reverse(act.begin(),act.end());
                if(act==arr[tamCad]){
                    arr[tamCad]=act;
                }else{
                    encont=true;
                    //break;
                }
            }else{
                arr[tamCad]=act;
            }
        }
        if(!encont){
            //cout<<reverso<<"  "<<total<<endl;
            cout<<"YES"<<endl;
        }else{
            //cout<<reverso<<"  "<<total<<endl;
            cout<<"NO"<<endl;
        }
    }
    return 0;
}