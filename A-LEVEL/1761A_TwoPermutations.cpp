#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin >> t;
    rep(i,0,t){
        int n;int a;int b;
        cin >> n >> a >> b;
        if(n==a && n==b){
            cout << "YES" << "\n";
        }
        else if(n-a-b>=2){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }
    return 0;
}