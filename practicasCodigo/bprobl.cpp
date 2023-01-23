#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,n1;
    cin>>n;
    
    while(n--){
        int res=0;
        cin>>n1;
        vector<int> num(n1);
        for(int i=0;i<n1;i++){
            cin>>num[i];
        }
        sort(num.begin(),num.end());
        for(int i=1;i<n1;i++){
            res +=num[i]-num[0];
        }
        cout<<res<<'\n';
    }
    return 0;
}