#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
using vi = vector<int>;

int main(){
    int t;cin >> t;
    rep(i,0,t){
        int size;cin>>size;
        int odd = 0;
        int even=0;
        rep(j,0,size){
            int num;cin >> num;
            if(num%2==0) even++;
            else odd++;
        }
        if(odd%2==0){
            cout << "YES" << "\n";
        }
        else cout << "NO" << "\n";
    }
    return 0;
}