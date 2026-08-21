#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin >> t;
    rep(i,0,t){
        int size;cin >> size;
        int maxi = 0;
        int count  = 0;
        rep(j,0,size){
            int num;cin >> num;
            if(num==0){
                count++;
                maxi = max(maxi,count);
            }
            else count = 0;
        }
        cout << maxi << "\n";
    }
    return 0;
}