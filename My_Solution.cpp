#include <bits/stdc++.h>
#define pb push_back


using namespace std;
const int MAXN = 100005;
typedef long long ll;

ll n;
bool check(ll mid){
    ll num = mid - (mid/3) - (mid/5) + (mid/15);
    if(mid%3 == 0 || mid%5 == 0){
        return false;
    }
    if(num == n){
        return true;
    }
    return false;
}
int main() {
    freopen("moobuzz.in", "r", stdin);
    freopen("moobuzz.out", "w", stdout);
    cin>>n;
    ll l = 1, r = 2e9;
    while(l < r){
        ll mid = (l+r)/2;
        ll num = mid - (mid/3) - (mid/5) + (mid/15);
        if(mid%3 == 0 || mid%5 == 0){
            if(num == n){
                if(check(mid+1)){
                    cout<<mid+1;
                    return 0;
                }
                if(check(mid-1)){
                    cout<<mid-1;
                    return 0;
                }
                if(check(mid+2)){
                    cout<<mid+2;
                    return 0;
                }
                if(check(mid-2)){
                    cout<<mid-2;
                    return 0;
                }
            }
            if(num < n){
                l = mid+1;
            }
            else{
                r = mid;
            }
        }
        else{
            if(num == n){
                cout<<mid;
                return 0;
            }
            if(num < n){
                l = mid+1;
            }
            else{
                r = mid;
            }
        }
    }
    return 0;
}

