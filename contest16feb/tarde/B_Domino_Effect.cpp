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
    int func(int,string,int);
    int main(){
        fast;
        int nro,sum,contad; 
        string s;
        char act,aux,ant;
        cin>>nro;
        cin>>s;
        ant=s[0];
        sum=0;
        contad=0;
        bool uno=false;
        fori(i,0,nro){
            act=s[i];
            if(act=='.'){
                sum+=1;
                uno=true;
            }else if(act=='L'){
                sum=0;
            }else if(act=='R'){
                fori(j,i+1,nro){
                    act=s[j];
                    if(act=='L'){
                        i=j;
                        break;
                    }else{
                        contad+=1;
                    }
                    i=j; //se vuelve l?
                }
                /* if(uno && contad==0){
                    contad=1;
                } */
                if(contad%2!=0 && (i!=nro-1 || act=='L')){
                    sum+=1;
                    uno=true;
                }else if(i==nro-1 && !uno){
                    sum=0;
                }else{}
                contad=0;
            }else{}
        }
        cout<<sum<<endl;
        return 0;
    }
    int func(int ind,string cad,int n){
        int res=0;
        fori(i,ind,n){
            if(cad[i]=='L'){
                break;
            }else{
                res+=1;
            }
            if(i==n-1){
                res=0;
            }
        }
        return res;
    }