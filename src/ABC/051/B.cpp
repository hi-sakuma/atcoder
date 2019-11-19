#include<iostream>
using namespace std;

int main()
{
    int K, S;
    cin >> K >> S;
    int ans = 0;
    for (int x=0;x<K+1;x++)
    {
        for (int y=0;y<x+1;y++)
        {
            for (int z=0;z<y+1;z++)
            {
                if(x+y+z == S)
                {
                    if (x==y && y==z)
                    {
                        ans += 1;
                    } 
                    else if (x != y && y != z && z != x)
                    {
                        ans += 6;
                    }
                    else
                    {
                        ans +=3;
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}