#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;cin >>t;
	rep(i,0,t){
	    string big; string small;
	    cin >> big >> small;
	    int s = small.size()-1;
	    int r = big.size()-1;
	    vector<int> vec(26);
	    for(int j=0;j<=s;j++){
	        vec[small[j]-'A']++;
	    }
	    int flag = 0;
	    int d = 1;
	    while(r>=0 && s>=0){
	        if(small[s]==big[r]){
	            vec[small[s]-'A']--;
	            s--;
	            r--;
	            flag = 1;
	            continue;
	        }
	        if(small[s]!=big[r] && vec[big[r]-'A']>0){
	            d = 0;
	            break;
	        }
	        r--;
	    }
	    rep(j,0,26){
	        if(vec[j]>0) d=0;
	    }
	    if(d==1) cout << "YES" << "\n";
	    else cout << "NO" << "\n";
	}
	return 0;
}
