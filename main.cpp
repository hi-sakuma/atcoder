#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (n); i++)

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
    return 0;
}