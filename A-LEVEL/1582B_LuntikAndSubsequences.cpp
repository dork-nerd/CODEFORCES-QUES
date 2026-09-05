#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;cin >>t;
	rep(i,0,t){
	    int size;cin >> size;
	    long long one = 0;
	    long long zero = 0;
	    rep(j,0,size){
	        int num;cin >> num;
	        if(num==1) one++;
	        else if(num==0) zero++;
	    }
	    long long res = (1LL<<zero)*one;
	    cout << res << "\n";
	}
	return 0;
}
