#define rep(i,a,b) for(int i=a;i<b;i++)
#include <bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin >> size;
    rep(i,0,size){
        int num;
        cin >> num;
        if(num%3==0) cout << "Second" << "\n";
        else cout << "First" << "\n";
    }
    return 0;
}