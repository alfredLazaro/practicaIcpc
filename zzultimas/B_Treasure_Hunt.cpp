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
    int cambios,ra,rb,rc;
    string a,b,c;
    cin>>cambios;
    multiset<char> ma,mb,mc;
    cin>>a>>b>>c;
    int tam=a.size();
    ra=rb=rc=0;
    fori(i,0,tam){
        char aca=a[i];
        char acb=b[i];
        char acc=c[i];
        ma.insert(aca);
        mb.insert(acb);
        mc.insert(acc);
        int ca=ma.count(aca);
        int cb=mb.count(acb);
        int cc=mc.count(acc);
        if(ca>ra){
            ra=ca+1;
            // ca=ra;
        }
        if(cb>rb){
            rb=cb;
            // ca=ra;
        }
        if(cc>rc){
            rc=cc;
            // ca=ra;
        }

    }
    vector<parInt> arr(3);
    ra+=cambios;
    rb+=cambios;
    rc+=cambios;
    if(ra>tam){ ra=tam;}
    if(rb>tam){ rb=tam;}   
    if(rc>tam){ rc=tam;}
    arr[0]=parInt(ra,0);
    arr[1]=parInt(rb,1);
    arr[2]=parInt(rc,2);
    int caso=3;
    if(cambios<tam){
        if(arr[0].first==arr[1].first&&arr[2].first==arr[1].first){
            //entonces todos cumplen 
        }else{

        }
    }else{}
    return 0;
}