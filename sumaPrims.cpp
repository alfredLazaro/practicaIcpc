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
bool primo[2000000]; //{true}; //todos son primos
vector<int> cribaEr(ll N){
    ll i, j,cont, cont2,esp;
    vector<int> prims;
    
    for (i = 0; i < N; i++)
    {
        primo[i]=true;
    }
    for (i = 2; i < N; i++) 
    {
        for(j=2;i*j<N;j++){ //empieza por pares 2*2 2*3 luego 3*2 3*3
            primo[i*j] =false;
        }
    }
    for (i = 2; i < N; i++)
    {
        if(primo[i]){
            prims.push_back(i);
        }
    }
    return prims;
}
int main(){
    fast;
    int cant,sum,nro,cont,tam;
    cant=10001;
    sum=0;
    vector<int> lista=cribaEr(cant);
    int arrL[cant]{0};
    tam=lista.size();
    fori(i,0,tam-1){
        sum=lista[i];
        if(sum>cant){
            break;
        }
        arrL[sum]+=1;
        fori(j,i+1,tam-1){
            sum+=lista[j];
            if(sum<cant){
                arrL[sum]+=1;
            }else{
                break;
            }
        }
    }
    while (cin>>nro){
        if(nro==0){
            break;
        }
        cout<<arrL[nro]<<endl;
    }
    return 0;
}