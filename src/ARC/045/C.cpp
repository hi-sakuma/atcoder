#include <iostream>
#include <cmath>
#include <bitset>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    string S;
    cin >> S;
    const int len = S.size()-1;
    long ans = 0;
    string tmp;

    for (int i=0;i<pow(2, len);i++)
    {

        tmp = S[0];

        string bit = bitset<9>(i).to_string().substr(9-len);
        for(int j=0;j<len;j++)
        {
            if(bit[j] == '0'){
                tmp += S[j+1];
            } 
            else
            {
                ans += stol(tmp);
                tmp = S[j+1];
            }

        }
        ans += stol(tmp);
    }


    cout << ans << endl;
    return 0;
}