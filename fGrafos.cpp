#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define fori(i, ii, n) for(ll i= ii; i<n ;i++)
#define endl '\n'
#define x first 
#define y second
#define cor pair<ll, ll>
#define pi pair<ll,ll>
#define forir(i, ii, n) for (ll i = ii; i>n; i--)
typedef long long int ll;
#define N 51
vector<vector<ll>> grafo(N);
vector<vector<ll>> ecol(N, vector<ll> (N));

void ini() {
	fori(i, 0, N) {
		vector<ll> aux;
		grafo[i] = aux;
	}	
	fori(i, 0, N) 
		fori(j, 0, N) 
			ecol[i][j] = 0;	
}
ll bfs(ll i, bool *vis, ll k) {
	ll x = 1, y = 1;
	stack<ll> st;
	st.push(i);
	while (!st.empty()) {
		i = st.top();
		st.pop();
		vis[i] = true;
		y = 1;
		ll j = 0;
		vector<bool> a(grafo[i].size()+1, false);
		fori(k, 0, grafo[i].size()) a[k] = true;
		y = 1;		
		while (j<grafo[i].size()) {
			if (!vis[j]) {
				st.push(j);
			}
			if (!ecol[i][j]) {
				while (y<a.size() && a[y]) 
					y++;
				ecol[i][j] = y;
				ecol[j][i] = y++;
				a[y] = true;	
				x = max(x, y);
			}
			j++;
		}
	}
	
	return max(k, x);
}
void solve() {
	ll n, q, k = 0;
	cin>>n>>q;
	ini();
	vector<pair<ll, ll>> outt(q);  //
	ll m = INT_MAX;
	fori(i, 0, q) {
		ll x, y;
		cin>>x>>y; 
		outt[i] = {x, y};
		grafo[x].push_back(y);
		grafo[y].push_back(x);
		m = min(m, min(x, y));
	}
	bool vis[n+1];
	fori(i, 0, n+1) vis[i] = false;
	k = bfs(m, vis, 0);
	
	cout<<k<<endl;
	fori(i, 0, q) {
		cout<<ecol[outt[i].x][outt[i].y]<<' ';
	}
	cout<<endl;
}
int main(){
	fast; 
	ll t;
	//cout.precision(15);
	//t = 1;
	cin>>t; 
	while (t--){ 
		solve();
	}		
        return  0;
}

