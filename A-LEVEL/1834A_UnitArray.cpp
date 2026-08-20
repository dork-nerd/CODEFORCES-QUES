#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
using vi = vector<int>;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin >> t;
    rep(i,0,t){
        int size;cin >> size;
        int neg = 0;
        int pos = 0;
        rep(j,0,size){
            int num;cin >> num;
            if(num==1)pos++;
            else neg++;
        }
        if(pos>=neg){ 
            if(neg%2==0) cout << 0 << "\n";
            else cout << 1 << "\n";
        }
        else{
            int diff = (neg-pos+1)/2;
            int change = neg-diff;
            if(change%2==0) cout << diff << "\n";
            else cout << diff+1 << "\n";
        }
    }
    return 0;
}