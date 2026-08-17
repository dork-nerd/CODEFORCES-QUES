#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
 int main(){
     int t;cin >> t;
     rep(i,0,t){
         int a,b,c;
         cin >> a >> b >> c;
         if(a+(c+1)/2>b+(c/2)) cout << "First" << "\n";
         else cout << "Second" << "\n";
     }
     return 0;
 }