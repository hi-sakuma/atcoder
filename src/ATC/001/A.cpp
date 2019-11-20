#include <iostream>
using namespace std;

int H, W;
char maze[500][500];
bool visited[500][500];
bool can;

void search(int x, int y)
{
    if(x < 0 || W <= x || y < 0 || H <= y || maze[x][y] == '#' || visited[x][y]) return;
    if(maze[x][y] == 'g') can = true;
    visited[x][y] = true;

    search(x+1, y);
    search(x-1, y);
    search(x, y+1);
    search(x, y-1);
}

int main()
{
    // int H, W;
    cin >> H >> W;
    int start_x, start_y;
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin >> maze[i][j];
            if(maze[i][j] == 's')
            {
                start_x = i;
                start_y = j;
            }
        }
    }

    search(start_x, start_y);

    cout << (can?"Yes":"No") << endl;
    return 0;
}