#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;cin >> t;
	rep(i,0,t){
	    long long num;cin >> num;
	    if(num<4){ cout << -1 << "\n";continue;}
	    if(num%2==1){
	        cout << -1 << "\n";
	        continue;
	    }
	    int count = 0;
	    if(num%6==2 || num%6==4) count++;
	    cout << num/6+count << " " << num/4 << "\n"; 
	}
	return 0;
}
