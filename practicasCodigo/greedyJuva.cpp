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
int arr[]={1,2,5,10,20,50,100},arrC[]={5,10,20,50};
int chan(int);

int main(){
    fast;
    double cant,aux,aux2;
    cin>>cant;
    aux=(int) cant;   
    //cant= aux; 
    aux=10*(cant-aux);
    //cout<<aux<<" ";
    aux=10*aux;
    //cout<<aux<<endl;
    int resp=chan(cant);
    //resp+=chan(aux);
    cout<<resp<<endl;
    return 0;
}
int chan(int cant){
    int res=0;
    int pos=6,resto,posCent=3,restoC,cent;
    int cont=0;
    while(cant>0){
        resto=cant-arr[pos];
        if(resto>=0){
            //cont+=1;
            //si resto es 0 se encontro una forma
            cant=resto;
        }else{
            pos--;
            cont+=1;
        }
    }
    res=cont;
    return res;
}