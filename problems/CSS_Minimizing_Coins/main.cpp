#include <bits/stdc++.h>

#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
#define int long long
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pii;
const int MAX = 1e6 + 5;
const int INF = 0x3f3f3f3f;

signed main(){
    fastInp;
    int memo[MAX];
    int n,x,k;
    cin >> n >> x;
    fill(memo+1,memo+1+x,INF);
    for(int i=0; i<n;i++){
        cin >> k;
        for(int oi=0; oi <= x-k; oi++){
            if(memo[oi]!=INF) memo[oi+k] = min(memo[oi+k],memo[oi]+1);
        }
    }
    cout << (memo[x]==INF ? -1 : memo[x]) << "\n";

}
