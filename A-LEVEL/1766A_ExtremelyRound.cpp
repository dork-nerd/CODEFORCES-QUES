#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin >> t;
    rep(i,0,t){
        int firstdigit = 0;
        int digits = 0;
        int num;cin >> num;
        while(num>0){
            digits++;
            firstdigit = num%10;
            num = num/10;
        }
        cout << (digits-1)*9+firstdigit << "\n";
    }
    return 0;
}