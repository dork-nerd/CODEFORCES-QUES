#include <bits/stdc++.h> 
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >>n;
    int mini = 100001;
    rep(i,0,n){
        int num;cin >> num;
        mini = min(abs(num),mini);
    }
    cout << mini;
    return 0;
}