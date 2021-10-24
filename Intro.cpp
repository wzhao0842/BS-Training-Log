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

//fast searching 
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int ar[n]; for(int i=0;i<n;i++) cin >> ar[i];
    sort(ar, ar+n);
    int m; cin >> m;
    for(int i=0;i<m;i++){
        int a, b; cin >> a >> b;
        int left = -1, right = -1;
        int l = -1, r = n;
        //lower bound
        while(l<r-1){
            int mid = (l+r)/2;
            if(ar[mid] >= a){
                r = mid;
            }else{
                l = mid;
            }
        }
        if(ar[r] >= a) left = r; 
        l = -1, r = n;
        while(l<r-1){
            int mid = (l+r)/2;
            if(ar[mid] <= b){
                l = mid;
            }else{
                r = mid;
            }
        }
        if(ar[l] <= b) right = l;
        if(left != -1 && right != -1){
            cout << right - left + 1 << " ";
        }else{
            cout << 0 << " ";
        }
    }
}
