#include <iostream>
#include <queue>
using namespace std;

#define rep(i, s, n) for (int i = (s); i < (n); i++)

int max_y, max_x, sx, sy, gx, gy;
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
    cin >> max_y >> max_x >> sy >> sx >> gy >> gx;


    rep(j, 1, max_y+1)
    {
        rep(i, 1, max_x+1)
        {
            cin >> maze[i][j];
            minmove[i][j] = -1;
        }

    }

    minmove[sx][sy] = 0;
    q.push(position{sx, sy});

    // cout << gy << gx << endl;
    while (!q.empty())
    {
        struct position present = q.front();

        if (present.x == gx && present.y == gy)
        {
            cout << minmove[present.x][present.y] << endl;
            return 0;
        }

        rep(i, 0, 4)
        {
            int next_x = present.x + dx[i];
            int next_y = present.y + dy[i];
           if (maze[next_x][next_y] == '.' && minmove[next_x][next_y] == -1)
            {
                minmove[next_x][next_y] = minmove[present.x][present.y] + 1;
                q.push(position{next_x, next_y});
            }
        }
        q.pop();
    }
}