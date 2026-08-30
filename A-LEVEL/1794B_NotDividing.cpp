#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define reprev(i,a,b) for(int i=a;i>=b;i--)
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
	    rep(j,0,size){
	        if(vec[j]==1) vec[j]++;
	    }
	    rep(j,0,size-1){
	        if(vec[j+1]%vec[j]==0) vec[j+1]++;
	    }
	    rep(j,0,size){
	        cout << vec[j] << " ";
	    }
	    cout << "\n";
	}
	return 0;
}
