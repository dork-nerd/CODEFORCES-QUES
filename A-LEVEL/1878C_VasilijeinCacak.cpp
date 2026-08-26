#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin >> t;
    rep(i,0,t){
        long long n,k,sum;
        cin >> n >> k >> sum;
        long long minsum = k*(k+1)/2;
        long long maxsum = k*(2*(n-k+1)+(k-1)*1)/2;
        if(sum<=maxsum && sum>=minsum){
            cout << "YES" << "\n";
        }
        else cout << "NO" << "\n";
    }
    return 0;
}