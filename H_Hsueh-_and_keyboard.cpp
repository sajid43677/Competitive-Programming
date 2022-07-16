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
const int N =  1e6 + 10;
const int inf = 1061109567;
int x,n,cnt;
int dis[1000000] , head[1000000];
struct node{
    int i,c;
    node(){
        i = 0;
        c = 0;
    }
    node(int a, int b){
        i = a; c = b;
        }
    bool operator<(const node &a)const{
        return a.c < c;
    }
};
struct edge{
    int v,w,next;
    edge(){}
    edge(int a,int b,int c){v = a; w = b; next = c;}
}e[1000000];

void addedge(int u,int v, int w){
    e[cnt].v = v, e[cnt].w = w, e[cnt].next = head[u];
    head[u] = cnt++;
}

void d(int s){
    memset(dis,inf,sizeof dis);
    dis[s] = 0;
    priority_queue<node> q;
    q.push(node(s,0));
    while(!q.empty()){
        node p = q.top();q.pop();
        int u = p.i;
        if(p.i == n) break;
        for(int i = head[u]; ~i;i = e[i].next){
            int v = e[i].v, w = e[i].w;
            if(dis[v] > dis[u] + w){
                dis[v] = dis[u] + w;
                q.push(node(v,dis[v]));
            }
        }
    }
    cout << dis[n] << endl;
}

void solve(){
    cin >> x >> n;
    int T = (x > n) ? x + 100 : n + 100;
    allnegOne(head);
    for(int i = 0; i <= T; i++){
        addedge(i,i+1,1);
        addedge(i+1,i,1);
        addedge(i+1,0,3);
        for(int j = 2;i*j <= T && i;j++){
            addedge(i,i*j,2+2*j);
        }
    }
    d(x);
}


int main()
{
    Boost;
    solve();
    

}











