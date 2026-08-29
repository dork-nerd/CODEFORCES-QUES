#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;cin >> t;
	rep(i,0,t){
	    int to,size;
	    cin >> size >> to;
	    vector<int> vec(size);
	    vector<long long> prefix(size);
	    long long sum = 0;
	    rep(j,0,size){
	        int num;cin >> num;
	        vec[j] = num;
	        sum += num;
	        prefix[j] = sum;
	    }
	    rep(j,0,to){
	        int l,r,k;
	        cin >> l >> r >> k;
	        long long tempsum = prefix[r-1]-prefix[l-1]+vec[l-1];
	        int parity = 0;
	        if((r-l+1)%2==1 && k%2==1){
	            parity = 1;
	        }
	        if(((sum-tempsum)%2)!=parity){
	            cout << "YES" << "\n";
	        }
	        else cout << "NO" << "\n";
	    }
	}
	return 0;
}
