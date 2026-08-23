#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define reprev(i,a,b) for(int i=a;i>=b;i--)
using namespace std;
using vi = vector<int>;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin >> t;
    rep(i,0,t){
        int size;cin>>size;
        vi vec(size);
        rep(j,0,size){
            int num;cin >> num;
            vec[j] = num;
        }
        if(vec[size-1]!=vec[size-2]){
            cout << "YES" << "\n";
            reprev(j,size-1,0){
                cout << vec[j] << " ";
            }
            cout << "\n";
        }
        else if(size==2){
            if(vec[size-1]==vec[size-2]){
                cout << "NO" << "\n";
            }
        }
        else{
            int ex = size;
            reprev(j,size-3,0){
                if(vec[j]!=vec[size-2]){
                    ex = j;
                    break;
                }
            }
            if(ex==size) cout << "NO" << "\n";
            else{
                int temp = vec[ex];
                vec[ex] = vec[size-2];
                vec[size-2] = temp;
                cout << "YES" << "\n";
                reprev(j,size-1,0){
                    cout << vec[j] << " ";
                }
                cout << "\n";
            }
        }
    }
    return 0;
}