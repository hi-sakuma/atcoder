#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int R, C, sx, sy, gx, gy;
char maze[51][51];
int minmove[51][51];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
struct position
{
    int x;
    int y;
};
queue<position> q;



int main()
{
    cin >> R >> C >> sy >> sx >> gy >> gx;
    // rep(i, R)
    for (int i = 1; i < (R+1); i++)
    {
        // rep(j, C)
        for (int j = 1; j < (C+1); j++)
        {
            cin >> maze[i][j];
            minmove[i][j] = -1;
        }
    }

    minmove[sx][sy] = 0;
    q.push(position{sx, sy});

    cout << gy << gx << endl;
    while (!q.empty())
    {
        struct position present = q.front();
        cout << present.x << ":" << present.y << ":" << minmove[present.x][present.y] << endl;
        cout << maze[present.x][present.y] << ":" <<  << endl;
        

        if (present.x == gx && present.y == gy)
        {
            cout << minmove[present.x][present.y] << endl;
            return 0;
        }

        rep(i, 4)
        {
            if (maze[present.x+dx[i]][present.y+dy[i]] == '.' && minmove[present.x+dx[i]][present.y+dy[i]] == -1)
            {
                minmove[present.x+dx[i]][present.y+dy[i]] = minmove[present.x][present.y] + 1;
                q.push(position{present.x+dx[i], present.y+dy[i]});
            }
        }
        q.pop();
    }
}