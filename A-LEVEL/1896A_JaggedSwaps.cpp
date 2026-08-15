#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

int main(){
    int t;cin>>t;
    rep(i,0,t){
        int size;cin>>size;
        int first;
        rep(j,0,size){
            int num;cin>>num;
            if(j==0) first = num;
        }
        if(first==1) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
}