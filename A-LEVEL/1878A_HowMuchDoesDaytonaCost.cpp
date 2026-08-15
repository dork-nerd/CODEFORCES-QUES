#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int main() {
    int t;
    cin >> t;
    rep(i,0,t){
        int size;
        cin >> size;
        int num;cin>>num;
        int flag = 0;
        rep(j,0,size){
            int n;cin >> n;
            if(n==num){
                flag = 1;
            }
        }
        if(flag==1) cout << "YES" << "\n"; 
        else cout << "NO" << "\n";
    }
}
