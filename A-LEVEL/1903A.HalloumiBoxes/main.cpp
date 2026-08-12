#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int size;
        int rev;
        cin >> size;
        cin >> rev;
        vector<int> vec(size);
        for(int i=0;i<size;i++) cin >> vec[i];
        int toggle = 1;
        if(rev<2){
            for(int i=0;i<size-1;i++){
                if(vec[i]>vec[i+1]){
                    toggle = 0;
                    break;
                }
            }
        }
        if(toggle==1) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
    return 0;
}