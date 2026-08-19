#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int size;cin >> size;
	rep(i,0,size){
	    int target; cin >> target;
	    int step;cin >> step;
	    int last = 0;
	    rep(j,0,target+1){
	        if(j%step!=0)last = j;
	    }
	    if(last==target)cout << 1 << "\n" << last << "\n";
	    else cout << 2 << "\n" << last << " " << target-last << "\n";
	}
	return 0;
}

//better solution is to jump to target-1 index if target isnt divisible by the step .. 
//or i can just run the loop from behind and break it the moment i get a number where the step doesnt divide .. 