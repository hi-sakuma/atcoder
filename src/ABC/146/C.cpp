#include <iostream>
#include <cmath>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (n); i++)

long long A,B,X,n,up,low;

int main()
{

    cin >> A >> B >> X;
    if(X == pow(10, 9)) 
    {
        cout << pow(10,9) << endl;
        return 0;
    }

    up = pow(10,9);
    low = 0LL;
    rep(i, 1, pow(10,9))
    {

        if(up == low)
        {
            n = up;
            break;
        }

        long long border = low + (up - low) / 2;
        cout << border << endl;
        if((A * border + B * to_string(border).size() <= X))
            low = border;
        else
            up = border;
    }
    
    cout << n << endl;
    return 0;
}


