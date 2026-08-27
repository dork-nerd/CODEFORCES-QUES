#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	rep(i,0,t){
	    long long n;cin >> n;
	    long long count = 0;
	    rep(j,1,n+1){
	        if(n%j==0)count++;
	        else{
	            break;
	        }
	    }
	    cout << count << "\n";
	}
	return 0;
}
