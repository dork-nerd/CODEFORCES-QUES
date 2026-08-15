#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

int main(){
    int n;cin>>n;
    rep(i,0,n){
        int size; cin>>size;
        int sum = 0;
        rep(j,0,size-1){
            int n;cin >> n;
            sum += n;
        }
        cout << -sum << "\n";
    }
    return 0;
}