#include<iostream>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    int ans;
    ans = min(B / A, C);
    cout << ans << endl;
}