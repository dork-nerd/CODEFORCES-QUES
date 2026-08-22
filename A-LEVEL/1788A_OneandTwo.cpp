#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;
using vi = vector<int>;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin >> t;
    rep(i,0,t){
        int size;cin >> size;
        int count = 0;
        vi vec(size);
        rep(j,0,size){
            int num;cin >> num;
            vec[j] = num;
            if(num==2) count++;
        }
        if(count%2!=0){
            cout << -1 << "\n";
        }
        else if(count==0){
            cout << 1 << "\n";
        }
        else{
            int c = 0;
            rep(j,0,size){
                if(count/2==c){ 
                    cout << j << "\n";
                    break;
                }
                if(vec[j]==2) c++;
            }
        }
    }
    return 0;
}