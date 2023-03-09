#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pi;

//double pi = acos(-1.0);

#define xx first
#define yy second
#define all(x) x.begin(),x.end()
#define allZero(a) memset(a,0,sizeof(a));
#define allnegOne(a) memset(a,-1,sizeof(a));
#define endl "\n"
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define reverseS string(curr.rbegin(),curr.rend()); //reverse string assignment
#define Read freopen("input.txt","r",stdin);
#define Write freopen("output.txt","w",stdout);
#define pb push_back
#define for1(n) for(int i = 0; i < n;i++)
#define for2(n) for(int i = 1; i <= n;i++)
#define lohi int, vector<int>, greater<int>>
#define mkp make_pair
#define pendl cout << '\n' 

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << ": " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << ": " << arg1 << " |"; __f (comma + 1, args...);
}


const int dx[] = {1, 0, 1, 0};
const int dy[] = {0, 1, 0, -1};

int h, w;
vector<string> grid;
vector<vector<bool>> visited;
int black_count;
int white_count;

bool isValid(int x, int y) {
    return x >= 0 && x < h && y >= 0 && y < w && !visited[x][y];
}

void bfs(int x, int y) {
    queue<pair<int, int>> q;
    q.push({x, y});
    //visited[x][y] = true;
    while (!q.empty()) {
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for (int i = 0; i < 2; i++) {
            int newX = x + dx[i], newY = y + dy[i];
            if (isValid(newX, newY)) {
                //visited[newX][newY] = true;
                if(grid[newX][newY] == '.') black_count++;
                q.push({newX, newY});
            }
        }
    }
}

void bfs1(int x, int y) {
    queue<pair<int, int>> q;
    q.push({x, y});
    //visited[x][y] = true;
    while (!q.empty()) {
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for (int i = 0; i < 2; i++) {
            int newX = x + dx[i], newY = y + dy[i];
            if (isValid(newX, newY)) {
                //visited[newX][newY] = true;
                if(grid[newX][newY] == '#') white_count++;
                q.push({newX, newY});
            }
        }
    }
}

int main() {
    cin >> h >> w;
    grid.resize(h);
    visited.resize(h, vector<bool>(w));
    for (int i = 0; i < h; i++) {
        cin >> grid[i];
    }
    int count = 0;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (grid[i][j] == '#') {
                black_count = 0;
                bfs(i, j);
                count += black_count;
            }
            
        }
    }
    for1(h){
        for(int j = 0; j < w;j++){
            visited[i][j] = false;
        }
    }
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (grid[i][j] == '.') {
                white_count = 0;
                bfs1(i, j);
                count += white_count;
            }
            
        }
    }

    cout << count << endl;
    return 0;
}