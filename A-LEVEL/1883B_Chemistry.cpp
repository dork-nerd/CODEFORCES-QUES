#include <bits//stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin >> t;
    rep(i,0,t){
        int size;cin >> size;
        int k;cin >> k;
        vector<int> vec(26);
        string s;cin >> s;
        rep(j,0,size){
            vec[s[j]-'a']++; 
        }
        int odd = 0;
        rep(j,0,26){
            if(vec[j]%2==1) odd++;
        }
        if(odd-k>1) cout << "NO" << "\n";
        else cout << "YES" << "\n";
    }
    return 0;
}