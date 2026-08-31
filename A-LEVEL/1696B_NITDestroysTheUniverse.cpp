#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;cin >> t;
	rep(i,0,t){
	    int size;cin >> size;
	    vector<int> vec(size);
	    rep(j,0,size){
	        int num;cin >> num;
	        vec[j] = num;
	    }
	    int count = 0;
	    int prev = vec[0];
	    if(prev!=0) count=1;
	    rep(j,1,size){
	        if(prev==0 && vec[j]!=0){
	            count++;
	        }
	        prev = vec[j];
	    }
	    cout << min(count,2) << "\n";
	}
	return 0;
}
