#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin >> t;
    rep(i,0,t){
        long long count = 0;
        long long a,c,n;
        cin >> a >> c >> n;
        count +=c;
        rep(j,0,n){
            long long num;cin >> num;
            count += min(num,a-1);
        }
        cout << count << "\n";
    }
    return 0;
}