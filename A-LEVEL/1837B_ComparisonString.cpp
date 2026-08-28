#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;cin >> t;
	rep(i,0,t){
	    int size;cin >> size;
	    string s;cin >> s;
	    int count = 1;
	    int c = 1;
	    int maxi = 0;
	    rep(j,1,size){
	        if(s[j]==s[j-1]){
	            c++;
	        }
	        else{
	            maxi = max(maxi,c);
	            c=1;
	        }
	    }
	    maxi = max(maxi,c);
	    maxi += count;
	    cout << maxi << "\n";
	}
	return 0;
}
