#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin >> t;
    rep(i,0,t){
        int x1;cin >> x1;
        int y1;cin >> y1;
        int x2;cin >> x2;
        int y2;cin >> y2;
        if(y2<y1) {
            cout << -1 << "\n";
            continue;
        }
        else if(y2==y1){
            if(x2>x1){
                cout << -1 << "\n";
                continue;
            }
            else{
                cout << x1-x2 << "\n";
            }
        }
        else if(y2>y1){
            int diffx = x2-x1;
            int diffy = y2-y1;
            if(diffx>diffy){
                cout << -1 << "\n";
                continue;
            }
            else{
                cout << diffy-diffx+diffy << "\n";
                continue;
            }
        }
    }
    return 0;
}