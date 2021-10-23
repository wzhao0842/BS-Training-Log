//standard bs 
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int ar[n]; for(int i=0;i<n;i++) cin >> ar[i];
    for(int i=0;i<m;i++){
        int q; cin >> q;
        int l = 0, r = n;
        bool cond = 0;
        while(l<r){
            int mid = (l+r)/2;
            if(ar[mid] == q){
                cond = 1;
                cout << "YES\n";
                break;
            }else if(ar[mid] > q){
                r = mid;
            }else{
                l = mid + 1;
            }
        }
        if(!cond){
            cout << "NO" << endl;
        }
    }
}
