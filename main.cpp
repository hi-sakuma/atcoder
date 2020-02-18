#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define rep(i, s, n) for (int i = (s); i < (n); i++)
#define ll long long
#define ull unsigned long long

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> Ls(m), Rs(m);
    // int Ls[m], Rs[m];
    rep(i, 0, m){
        cin >> Ls[i] >> Rs[i];
    }

    int maxL = *max_element(Ls.begin(), Ls.end());
    int minR = *min_element(Rs.begin(), Rs.end());
    int ans = max(0, minR - maxL + 1);
    cout << ans << endl;
    return 0;
}