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
typedef pair<llnsi, llnsi> parll;
typedef pair<int, int> parInt;
int main(){
    fast;
    ll t,n,act,mini;
    cin >> t ;
    while(t--){
        cin >> n ;
        ll a[n],b[n];
        ll sum[n]{0}; //est
        fori(i,0,n){
            cin >> a[i];
        }
        fori(i,0,n){
            cin >> b[i];
        }
        int aux=0;
        rfori(i,0,n){
            aux=n-i; //
            fori(j,0,i){
                mini= min(a[j],b[aux]);
                sum[aux]+=mini;
                a[j]-=mini;
                aux+=1;
            }
        }
        fori(i,0,n){
            cout << sum[i] << " ";
        }
        cout << endl;
    }
    return 0;
}