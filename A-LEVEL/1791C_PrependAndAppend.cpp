#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin >>t ;
    rep(i,0,t){
        int size;cin >> size;
        string s;cin >> s;
        int l = 0;
        int r = size-1;
        while(l<=r){
            if(s[l]!=s[r]){
                l++;
                r--;
            }
            else break;
        }
        if(r<l) cout << 0 << "\n";
        else cout << r-l+1 << "\n";
    }
    return 0;
}