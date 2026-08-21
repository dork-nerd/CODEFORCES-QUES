#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i =a;i<b;i++)
using ll = long long;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin >> t;
    rep(i,0,t){
        ll n;cin >> n;
        ll k;cin >> k;
        if(n%2==0){
            cout << "YES" << "\n";
        }
        else{
            if(k%2==0) cout << "NO" << "\n";
            else cout << "YES" << "\n";
        }
    }
    return 0;
}

// integer overflow should be seen thruu the codee .. 