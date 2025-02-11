#include <bits/stdc++.h>

#define int long long
using namespace std;
using edge = tuple<int, int, int>;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;

#define TEST(a,i) ((a) & (1<<(i)))
#define SET(a,i) ((a) | (1<<(i)))
#define CLEAR(a,i) ((a) & ~(1<<(i)))
#define FLIP(a,i) ((a) ^ (1<<(i)))
#define all(x) x.begin(), x.end()
#define vin(vt) for (auto &e : vt) cin >> e
#define LSOne(S) ((S) & -(S))
#define oo 1000000007

#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
const int MAX = 1e5 + 5;
const int NONE = 0;
const int INF = 0x3f3f3f3f;

void solve(){
    int n;
    cin >> n;
    int dp[n+1];
    memset(dp, INF, sizeof dp);
    dp[0] = 0;
    for(int i = 1; i <= n; i++){
        int x = i;
        while(x){
            dp[i] = min(dp[i], dp[i - x % 10] + 1);
            x /= 10;
        }
    }
    cout << dp[n] << endl;
}

signed main(){
    fastInp;

    int t = 1;
    //cin >>t;

    while (t--) solve();

}