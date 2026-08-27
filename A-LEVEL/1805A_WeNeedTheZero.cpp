#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin >> t;
    rep(i,0,t){
        int size; cin>>size;
        int val = 0;
        rep(j,0,size){
            int num;cin >> num;
            val = val^num;
        }
        if(size%2==0){
            if(val==0) cout << val << "\n";
            else cout << -1 << "\n";
        }
        else{
            cout << val << "\n";
        }
    }
    return 0;
}