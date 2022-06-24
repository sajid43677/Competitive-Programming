#include <bits/stdc++.h>
using namespace std;


typedef long long ll;

//double pi = acos(-1.0);

#define allZero(a) memset(a,0,sizeof(a));
#define allnegOne(a) memset(a,-1,sizeof(a));
#define endl "\n"
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define reverseS string(curr.rbegin(),curr.rend()); //reverse string assignment
#define Read freopen("input.txt","r",stdin);
#define Write freopen("output.txt","w",stdout);
#define pb(x) push_back(x);
#define for1(n) for(int i = 0; i < n;i++)
//          u  r d l  
int dr[] = {-1,0,1,0};
int dc[] = {0,1,0,-1};
int visited[1001][1001] = {{0}};
int dist[1001][1001] = {{0}};
int bombs[1001][1001] = {{0}};
int n,m;
bool valid(int x, int y){
    return x >= 0 && x < n && y >= 0 && y < m && bombs[x][y] == 0 && visited[x][y] == 0;
}

void bfs(int x,int y){
    dist[x][y] = 0;
    queue <int> q;
    q.push(x);
    q.push(y);
    visited[x][y] = 1;
    dist[x][y] = 0;
   
    while(!q.empty()){
        int xp = q.front();
        q.pop();
        int yp = q.front();
        q.pop();
        for1(4){
            int xc = xp + dr[i];
            int yc = yp + dc[i];
            if(valid(xc,yc)){
                visited[xc][yc] = 1;
                dist[xc][yc] = dist[xp][yp] + 1;
                //cout << dist[xc][yc] << endl;
                q.push(xc);
                q.push(yc);
            }
        }
    }
}


void solve(){
    int tr,r,nb,bm,stx,sty,ex,ey;
    while(cin >> n >> m){
        if(n == 0 && m == 0) break;
        allZero(visited);
        allZero(dist);
        allZero(bombs);
        cin >> tr;
        for(int i = 0; i < tr;i++){
            cin >> r >> nb;
            for(int j = 0; j < nb;j++){
                cin >> bm;
                bombs[r][bm] = 1;
            }
        }
        cin >> stx >> sty;
        cin >> ex >> ey;
        bfs(stx,sty);
        cout << dist[ex][ey] << endl;
    }
}

//FuzzyCarnage
int main()
{
    Boost;
    //Read;Write;
    /* int t;
    cin >> t;
    while(t--)  */
        solve();
    

}











