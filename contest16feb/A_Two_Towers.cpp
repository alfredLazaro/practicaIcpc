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
        string s1,s2;
        int t,a,b,aux,sum,ca,cb;
        cin>>t;
        while(t--){
            cin>>a>>b;
            cin>>s1>>s2;
            char ant=s1[0],act,ulta,ultb;
            ca=0;
            aux=a,sum=b;
            fori(i,1,a){
                act=s1[i];
                if(ant==act){
                    aux=i; //movimientos posibles
                    ca+=1;
                }else{
                    ant=act;
                }
                ant=act;
            }
            ulta=s1[a-1];
            //a+=1;
            a-=aux;
            ant=s2[0];
            cb=0;
            fori(i,1,b){
                act=s2[i];
                if(ant==act){
                    sum=i; //movimientos posibles
                    cb+=1;
                }else{
                    ant=act;
                }
                ant=act;
            }
            ultb=s2[b-1];
            //b+=1;
            b-=sum;
            
            if(a==0 && b==0){
                cout<<"YES"<<endl;
            }else if((ca>1 || cb>1)){
                cout<<"NO"<<endl;
            }else if((ulta!=ultb) && (ca<1 || cb<1)){
                //cout<<ca<<" "<<cb<<endl;
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }

        return 0;
    }