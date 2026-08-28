#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;cin >> t;
	rep(i,0,t){
	    int n;cin >> n;
	    int k;cin >> k;
	    vector<int> vec(n);
	    rep(j,0,n){
	        int num;cin >> num;
	        vec[j] = num; 
	    }
	    sort(vec.begin(),vec.end());
	    int count = 1;
	    int maxi = 0;
	    rep(j,1,n){
	        if(vec[j]-vec[j-1]<=k){
	            count++;
	        }
	        else{
	            maxi = max(count,maxi);
	            count = 1;
	        }
	    }
	    maxi = max(count,maxi);
	    cout << n-maxi << "\n";
	}
}
