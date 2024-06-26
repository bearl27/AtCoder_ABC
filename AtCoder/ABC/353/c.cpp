#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<queue>
#include<deque>
#include<stack>
#include<cstdio>
#include<utility>
#include<set>
#include<list>
#include<cmath>
#include<iomanip>
#include<cstdio>
#include<cstring>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using vpii = vector<pii>;
using pll = pair<ll, ll>;
using vpll = vector<pll>;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define rep1(i,n) for(int i = 1; i < (n); i++)

///////////////////////////////////////
ll mod = 100000000;

int main(){
    //in
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(),a.end());
    int r = n;
    ll cnt = 0, ans = 0;
    rep(i,n){
        r = max(r, i+1);
        while(r-1 > i and a[r-1] + a[i] >= mod){
            r--;
        }
        cnt += n - r;
    }
    rep(i,n)ans += ll(a[i]) * (n-1);
    ans -= cnt * mod;
    cout << ans << endl;
    return 0;

}