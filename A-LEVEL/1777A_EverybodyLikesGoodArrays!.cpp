#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin >> t;
    rep(i,0,t){
        int size;cin >> size;
        int prev = 0;
        int count = 0;
        rep(j,0,size){
            int num;cin >> num;
            if(j==0) prev= num;
            else{
                if(prev%2==num%2)count++;
            }
            prev = num;
        }
        cout << count << "\n";
    }
    return 0;
}