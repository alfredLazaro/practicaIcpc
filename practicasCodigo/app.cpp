#include <bits/stdc++.h>
    using namespace std;
    #define fori(i,ii,n) for(int i=ii;i<n;i++)
    #define nfori(i,n) for(int i=n;i>0;i--)
    #define dfori(i,ii,n) for(int i=ii;i<n;i++)
    #define F first 
    #define pb push_back
    typedef long long int ll;
    #define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

vector<vector<int>> grafo(27);
void dfs(bool *b, int i) {
    b[i] = true;
    fori(j, 0, 27)
    if (grafo[i][j]>0 && !b[j]) dfs(b,j);
}
int main(){
    fast;
    int tam;
    cin>>tam;
    fori(i, 0, 27) {
        vector<int> ap(27);
        grafo[i] = ap;
    }
    set<int> vert;
    fori(i, 0, tam) {
        string x;
        cin>>x;
	int a, b;
	a = x[0]-'a', b = *x.rbegin()-'a';
        grafo[a][b]++; //sumamos 1 a la pocision donde deberia estar la letra
        vert.insert(a);
        vert.insert(b);
    }
    bool aux[27] {false}; //podemos iniciar esto para ahorrar tiempo
    //fori(i, 0, 27) cout<<aux[i];
    dfs(aux, *vert.begin());
    int c = 0;
    fori(i, 0, 27) 
        if (aux[i]) c++;
    fori(i, 0, 27)
	    fori(j, 0, 27)
	    	if (grafo[i][j])
			grafo[j][i]++;
    if (c==vert.size()) {
        fori(i, 0, 27) {
            int l = 0;
            fori(j, 0, 27) {
                if (grafo[i][j]>0)
                l++;
            }
            if (l&1) {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    } else {
        cout<<"NO"<<endl;
        return 0;
    }

    cout<<"YES"<<endl;

    return 0;
}
