#include <iostream>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); i++)

char maze[10][10];
bool visited[10][10], can, hasChanged;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int start_x, start_y, o_count, true_count;

void dfs(int x, int y)
{
    // cout << "position" << x << ":" << y << endl;
    if(x < 0 || 10 <= x || y < 0 || 10 <= y || maze[x][y] == 'x' || visited[x][y]) return;
    visited[x][y] = true;
    true_count = 0;
    rep(i, 10) rep(j, 10) if(visited[i][j]) true_count++;

    if(true_count == o_count+1) can = true;

    rep(i, 4) dfs(x+dx[i], y+dy[i]);
}

int main()
{
    o_count = 0;
    rep(i, 10)
    {
        rep(j, 10)
        {
            cin >> maze[i][j];
            if(maze[i][j] == 'o') o_count++;
        }
    }
    
    rep(i, 10)
    {
        rep(j, 10)
        {
            if(maze[i][j] == 'x') 
            {   
                maze[i][j] = 'o';
                hasChanged = true;
            }
            dfs(i, j);
            if(hasChanged) 
            {   
                maze[i][j] = 'x';
                hasChanged = false;
            }
            rep(l, 10) rep(m, 10) visited[l][m] = false;
        }
    }
    cout << (can?"YES":"NO") << endl;
}