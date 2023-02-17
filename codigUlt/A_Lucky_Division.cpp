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
    int arr[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int nro;
    set<int> arreg;
    arreg.insert(4);
    arreg.insert(7);
    arreg.insert(44);
    arreg.insert(47);
    arreg.insert(74);
    arreg.insert(77);
    arreg.insert(444);
    arreg.insert(447);
    arreg.insert(474);
    arreg.insert(477);
    arreg.insert(744);
    arreg.insert(747);
    arreg.insert(774);
    arreg.insert(777);
    cin>>nro;
    bool b=false;
    fori(i,0,14){
        if(nro/2>=arr[i]){
            if(nro%arr[i]==0){
                b=true;
                break;
            }
        }else{
            if(arreg.count(nro)){
                b=true;
            }
            break;
        }
    }
    if(b){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}