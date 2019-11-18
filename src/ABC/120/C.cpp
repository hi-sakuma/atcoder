#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int i = count(S.begin(), S.end(), '0');
    int j = S.size() - i;
    cout << 2 * min(i, j) << endl;
    return 0;
}