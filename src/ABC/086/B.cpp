#include <iostream>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int num = stoi(a+b);
    for (int i=1;i<=1000;i++)
    {
        if(i*i == num)
        {
            cout << "Yes" << endl;
            return 0;    
        }
    }
    cout << "No" << endl;
}