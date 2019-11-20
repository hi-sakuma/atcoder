#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int t[N],x[N],y[N];
    for(int i=0;i<N;i++)
    {
        cin >> t[i] >> x[i] >> y[i];
    }
    
    int t_pre = 0, x_pre = 0, y_pre = 0;
    for(int i=0;i<N;i++)
    {
        int dt = t[i] - t_pre;
        int dl = abs(y[i]-y_pre) + abs(x[i]-x_pre);
        bool can = (dt >= dl && dt % 2 == dl % 2);

        if(!can){
            cout << "No" << endl;
            return 0;
        }         
    }

    cout << "Yes" << endl;
}