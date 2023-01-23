#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define all(x) (x).begin, (x).end()
#define sz(x) ((int)(x).size())
#define forn(i,n) for(int i=0;i<n;i++)
#define fore(i,b,e) for(int i=b;i<e;i++)
#define forg(i,b,e,m) for(int i=b;i<e;i+=m)
#define rforn(i,n)  for(int i=n;i>=0;i--)
#define rfore(i,b,e) for(int i=b;i>=e;i--)
#define rforg(i,b,e,m) for(int i=s;i>=e;i-=m)
#define endl            "\n"
#define MOD             1000000007
#define fast_cin()      ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main(){
    fast_cin();
    string numer;
    int k;
    cin>>numer>>k;
    int num=numer.back()-'0';
    int tam=numer.length();
    numer.erase(tam-1);
    rforn(i,k){
        if(num!=0){
            num-=1;
        }else{
            num=numer.back()-'0';
            tam=numer.length();
            numer.erase(tam-1);
        }
    }
    numer+=num;
    cout<<numer<<endl;
    return 0;
}