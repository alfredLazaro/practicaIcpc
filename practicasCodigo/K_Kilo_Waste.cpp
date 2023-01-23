#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define endl '\n'
#define fori(i, ii, n) for (int i = ii; i<n; i++)
int minimize(int a, vector<int> &v, int n) {
        int res = INT_MAX;
        if (a>0)
        fori(i, 0, n) {
                if (abs(a-v[i])<a)
                res = min(res, minimize(a-v[i],v,n));
        }
        a= abs(a);
        res = min(res, a);
        return res;
}
int main() {
        fast;
        int k, n;
        cin>>k>>n;
        vector<int> v(n);
        fori(i, 0, n) cin>>v[i];
        sort(v.begin(), v.end());
        while (k--) {
                int x, r = INT_MAX;
                cin>>x;
                
                fori(i, 0, n)
                r = min(r, minimize(x-v[i], v, n));
                cout<<r<<endl;
        }
        return 0;
}
