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

vector <vector<int>> vc{ {26, 84, 57, 33, 91, 32, 97, 45, 99, 46},
{91, 40, 11, 77, 84, 80, 41, 19, 44, 48},
{19, 94, 2, 70, 82, 63, 49, 98, 27, 22},
{58, 53, 17, 77, 8, 40, 83, 90, 75, 36},
{35, 13, 4, 55, 45, 33, 78, 28, 5, 67},
{86, 62, 51, 14, 94, 64, 13, 19, 37, 93},
{28, 29, 7, 45, 85, 89, 48, 87, 38, 42}};


int visited[100];
int p[100];
int dist[100];

void bfs(int s,int t){
    for1(100) visited[i] = p[i] = dist[i] = 0;
    dist[s] = 0;
    queue <int> q;
    q.push(s);
    visited[s] = 1;
    p[s] = s;
   
    while(!q.empty()){
        int mother = q.front();
        //cout <<endl << mother << endl;
        q.pop();
        for(int i = 0; i < vc[mother].size(); i++){
            if(visited[vc[mother][i]] == 0){
                int child = vc[mother][i];
                dist[child] = dist[mother]++;
                p[child] = mother;
                visited[child] = 1;
                q.push(child);
                //cout << child << " ";
            }
        }
    }
    if(visited[t] == 0){
        cout << "No path found" << endl;
    }
    vector <int> ans;
    ans.pb(t);
    int curr = t;
    while(curr !=s){
        ans.pb(p[curr]);
        curr = p[curr];
    }
    reverse(ans.begin(),ans.end());
    for(auto c : ans){
        cout << c << " ";
    }
}


int main()
{

    bfs(1,99);
    return 0;
}
