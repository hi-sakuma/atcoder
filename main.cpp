#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (n); i++)
<<<<<<< HEAD
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
=======

int main(){
    int n;
    cin >> n;

    int A[n];
    rep(i, 0, n) {cin >> A[i];}

    string s = "";
    rep(k, 0, n) {s += A[k];}
    cout << s << endl;

    rep(i, 1, n){
        int v = A[i];
        int j = i - 1;
        while(j >= 0 && A[j] > v){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = v;
        s = "";
        rep(k, 0, n) {s += A[k];}
        cout << s << endl;
    }
>>>>>>> 19a359f3cf43aa46c53f6541a97f8daf7d54ee39
    return 0;
}