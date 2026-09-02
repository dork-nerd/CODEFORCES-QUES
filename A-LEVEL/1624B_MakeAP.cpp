#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;cin >> t;
	rep(i,0,t){
	    long long a,b,c;
	    cin >> a >> b >> c;
	    long long d1 = b-a;
	    long long d2 = c-b;
	    long long d3 = c-a;
	    int flag = 0;
	    if((b+d1)%c==0 && b+d1>0) flag = 1;
	    else if((b-d2)%a==0 && b-d2>0) flag = 1;
	    else if(d3%2==0 && ((a+(d3/2))%b==0) && (a+d3/2)>0) flag = 1;
	    if(flag==1) cout << "YES" << "\n";
	    else cout << "NO" << "\n";
	}
	return 0;
}
