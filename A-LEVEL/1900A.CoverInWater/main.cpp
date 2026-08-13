#define rep(i,a,b) for(int i=a;i<b;i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int size;
    cin >> size;
    rep(i,0,size){
        int len;
        cin >> len;
        string s;
        cin >> s;
        int count = 0;
        int dotcount = 0;
        rep(i,0,len){
            if(count==3) break;
            if(s[i]=='.'){ count++;dotcount++;}
            else count = 0;
        }
        if(count==3){
            cout << 2 << "\n";
        }
        else{
            cout << dotcount << "\n";
        }
    }
    return 0;

}
