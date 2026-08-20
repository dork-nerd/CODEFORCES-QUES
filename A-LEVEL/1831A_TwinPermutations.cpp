#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin >> t;
    rep(i,0,t){
        int size;cin >> size;
        int big = size+1;
        rep(j,0,size){
            int num;cin >> num;
            cout << big-num << " ";
        }
        cout << "\n";
    }
}