#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin >> t;
    rep(i,0,t){
        int size;cin >> size;
        vector<int> vec(size);
        int maxi = 0;
        int mini = 1000;
        int diff = 0;
        rep(j,0,size){
            int num;cin >> num;
            vec[j] = num;
            if(j==0) continue;
            if(num > maxi){
                maxi = num;
            }
        }
        if(size==1){
            cout << diff << "\n";
            continue;
        }
        rep(j,0,size){
            if(j==size-1) continue;
            if(vec[j] < mini){
                mini = vec[j];
            }
        }
        diff = max(maxi-vec[0],vec[size-1]-mini);
        rep(j,0,size-1){
            diff = max(vec[j]-vec[j+1],diff);
        }
        cout << diff << "\n";
    }
    return 0;
}
