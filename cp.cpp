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

const int N = 10e5;

vector <pair<int,int>> g[100];
int w[N];
int visited[N];

void dijkstra(int s){
    for1(N){
        w[i] = INT32_MAX;
    }
    priority_queue <pair<int,int>> pq;
    w[s] = 0;
    pq.push({0,s});
    while(!pq.empty()){
        auto node = pq.top();
        int v = node.second;
        int wv = node.first;
        pq.pop();
        if(visited[v] == 1) continue;
        visited[v] = 1;
        for(auto ch: g[v]){
            if(ch.second + w[v] < w[ch.first]){
                w[ch.first] = ch.second + w[v];
                pq.push({w[ch.first],ch.first});
            }
        }
    }
}

int main()
{
    /* Boost;
    Read;Write; */
    cout << "Hello" << endl;
    

}











