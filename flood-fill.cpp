#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
{
    // cout << image.size() << " "<<image[0].size() << endl;
    int n = image.size();
    int m = image[0].size();
    long long curr = image[sr][sc];
    // cout << curr << " " << n << " " << m << endl;
    vector<int> gx = {1, -1, 0, 0, 1, 1, -1, -1},
                gy = {0, 0, 1, -1, 1, -1, 1, -1};

    int xx, yy;
    function<void(int, int)> dfs = [&](int x, int y)
    {
        if (curr != image[x][y])
            return;
        image[x][y] = color;
        for (int i = 0; i < 4; i++)
        {
            int xx = gx[i] + x;
            int yy = gy[i] + y;
            if ((xx >= 0 && xx < n) && (yy >= 0 && yy < m))
            {
                cout << xx << " " << yy << endl;
                dfs(xx, yy);
            }
        }
        return;
    };
    dfs(sr, sc);
    return image;
}

int main()
{
    int n, m, sr, sc, color;
    cin >> n >> m >> sr >> sc >> color;

    vector<vector<int>>
        vc(n, vector<int>(m));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> vc[i][j];

    floodFill(vc, sr, sc, color);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << vc[i][j] << " ";
        cout << endl;
    }
}