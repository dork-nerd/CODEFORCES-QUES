#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    rep(i,0,n){
        map<int,int> mp;
        int size;
        cin >> size;
        rep(j,0,size){
            int num;
            cin >> num;
            mp[num]++;
        }
        if(mp.size()>2) cout << "NO" << "\n";
        else{
            if(mp.size()==2){
                auto it = mp.begin();
                int num = it->second;
                it++;
                num -= it->second;
                if(abs(num)<=1) cout << "YES" << "\n";
                else cout << "NO" << "\n";
            }
            else cout << "YES" << "\n";
        }
    }
    return 0;
}
