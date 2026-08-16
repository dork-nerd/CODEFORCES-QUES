#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
using vi = vector<int>;
int main(){
    int t;cin >> t;
    rep(i,0,t){
        int size;cin >> size;
        vi vec(size);
        rep(j,0,size){
            int num ; cin >> num;
            vec[j] = num;
        }
        int temp = size;
        rep(j,1,size){
            if(vec[j]<vec[j-1])temp++;
        }
        cout << temp << "\n";
        cout << vec[0] << " ";
        rep(j,1,size){
            if(vec[j]<vec[j-1]) cout << vec[j] << " ";
            cout << vec[j] << " ";
        }
        cout << "\n";
    }
    return 0;
}