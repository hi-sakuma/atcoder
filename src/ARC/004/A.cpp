#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int M = N-1;
    int x[M], y[M];
    for (int i=0;i<N;i++)
    {
        cin >> x[i] >> y[i];
    }
    double ans = 0;
    for (int i=0;i<N;i++)
    {
            for (int j=0;j<N;j++)
            {
                if(i==j) continue;

                ans = max(ans, pow(pow(x[j]-x[i], 2) + pow(y[j]-y[i], 2), 0.5));
            }
    }
    cout << ans << endl;
    return 0;
}