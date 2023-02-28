#include <bits/stdc++.h>
using namespace std;
#define fori(i,ii,n) for(int i=ii;i<n;i++)
#define nfori(i,ii,n) for(int i=n;i>=ii;i--)
#define dfori(i,ii,s,n) for(int i=ii;i<n;i+=s)
#define pb push_back
#define ll long long int
#define lnsi usnsigned long long int 
#define parI pair<int,int> 
#define pIs pair<int,string>
#define f first 
#define s second
#define INF 2e18
#define maxI INT_MAX
#define fast ios_base:: sync_with_stdio(false),cin.tie(0),cout.tie(0)
void KMP(string,string);

int main(){
    fast;
    int t;
    string text="ABCABAABACABAC";
               //0123456789101112
    string pattern = "CAB";
                    //012
    KMP(text,pattern);
    return 0;
}

void KMP(string texto, string pattern){
    int m=texto.length();
    int n=pattern.length();
    if(n==0){
        cout<<"the pattern occurs with shift 0";
        return;
    }else{}
    if(m<n){
        cout<<"Pattern not found";
        return;
    }else{}
    
    //almacena el indice de la mejor coincidencia parcialk
    int next[n+1];
    fori(i,0,n+1){
        next[i]=0;
    }
    fori(i,1,n){
        int j=next[i+1]; //el elemento de sig pos
        while(j>0 && pattern[j] != pattern[i]){
            j=next[j];
        }
        if(j>0 || pattern[j] == pattern[i]){
            next[i+1]=j+1;
        }
    }
    for(int i=0,j=0;i<m;i++){
        if(texto[i]==pattern[j]){
            if(++j==n){
                cout<<"The pattern occurs with shift"<<i-j+1<<endl;
            }
        }else if(j>0){
            j=next[j];
            i--; //ya que i se incrementara en la siguiente iteracion
        }
    }
}