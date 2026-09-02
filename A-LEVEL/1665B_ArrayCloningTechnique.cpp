#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;cin >> t;
	rep(i,0,t){
	    int size;cin >> size;
	    map<int,int> mp;
	    rep(j,0,size){
	        int num;cin >> num;
	        mp[num]++;
	    }
	    int maxi = 0;
	    for(const auto& [k,v]:mp ){
	        if(v>maxi) maxi = v;
	    }
	    int rem = size-maxi;
	    if(rem==0){
	        cout << 0 << "\n";
	        continue;
	    }
	    int temp = rem;
	    int c = 0;
	    while(maxi<size){
	        c++;
	        maxi = maxi+maxi;
	    }
	    cout << rem+c << "\n";
	}
	return 0;
}
