#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (n); i++)
#define ll long long
#define ull unsigned long long

ll gcd(ll a, ll b) {
    if (b==0) return a;
    else return gcd(b, a%b);
}
ll lcm(ll a, ll b) {
  return a / gcd(a, b) * b;
}

int main(){
    int n;
    cin >> n;
    ll T[n];
    rep(i, 0, n) cin >> T[i];

    ll ans = T[0];
    rep(i, 1, n){
        if(ans == T[i]) continue;
        ans = lcm(ans, T[i]);
    }

    cout << ans << endl;
    return 0;
}
