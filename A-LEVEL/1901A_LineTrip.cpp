#include <bits/stdc++.h>
using namespace std;
using vi = std::vector<int>;
#define rep(i,a,b) for(int i=a;i<b;i++)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    rep(i,0,t){
        int gascount;
        int dest;
        cin >> gascount;
        cin >> dest;
        vi vec(gascount);
        rep(i,0,gascount){
            cin >> vec[i];
        }
        int diff=vec[0];
        rep(i,0,gascount-1){
            diff = max(diff,vec[i+1]-vec[i]);
        }
        diff = max(diff,2*(dest-vec[gascount-1]));
        cout << diff << "\n";   
    }
    return 0;
}
