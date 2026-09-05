#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;cin >> t;
	rep(i,0,t){
	    int n,k;
	    cin >> n >> k;
	    int count = 0;
	    int flag = 0;
	    int interval = k;
	    string s;cin >> s;
	    rep(j,0,n){
	        if(interval==0){
	            interval = k;
	            if(flag==0) count++;
	            flag = 0;
	        }
	        if(s[j]=='0') flag = 1;
	        interval--;
	    }
	    if(interval==0 && flag==0) count++;
	    cout << count << "\n";
	}
}
