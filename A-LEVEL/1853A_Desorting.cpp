#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
using vi = vector<int>;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin >> t;
    rep(i,0,t){
        int flag = 1;
        int size; cin >> size;
        vi vec(size);
        rep(j,0,size){
            int num;cin >> num;
            vec[j] = num;
        }
        rep(j,1,size){
            if(vec[j]<vec[j-1]){
                flag = 0;
            }
        }
        if(flag==0){
            cout << 0 << "\n";
            continue;
        }
        int diff = vec[1]-vec[0];
        rep(j,1,size){
            diff = min(diff,vec[j]-vec[j-1]);
        }
        cout << diff/2+1 << "\n";
    }
    return 0;
}