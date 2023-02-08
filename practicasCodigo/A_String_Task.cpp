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
    string cad,cad2;
    set<char> voca;
    voca.insert('a');
    voca.insert('e');
    voca.insert('i');
    voca.insert('o');
    voca.insert('u');
    voca.insert('y');
    cin>>cad;
    int tam=cad.size();
    char act;
    fori(i,0,tam){
        act=tolower(cad[i]);
        if(!voca.count(act)){
            cad2=cad2+"."+act;
        }else{}
    }
    cout<<cad2<<endl;
    return 0;
}