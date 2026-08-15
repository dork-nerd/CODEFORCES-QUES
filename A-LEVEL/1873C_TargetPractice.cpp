#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

int main(){
    int t;cin>>t;
    rep(i,0,t){
        int sum = 0;
        rep(j,0,10){
            int row = 4;
            if(j>=5) row =5; 
            rep(k,0,10){
                int col = 4;
                if(k>=5) col = 5;
                char c; cin>>c;
                if(c=='X'){
                    int score = 5-max(abs(row-j),abs(col-k));
                    sum += score;
                }
            }
        }
        cout << sum << "\n";
    }
    return 0;
}