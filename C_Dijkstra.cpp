#include <bits/stdc++.h>
using namespace std;


typedef long long ll;

//double pi = acos(-1.0);

#define xx first
#define yy second
#define allZero(a) memset(a,0,sizeof(a));
#define allnegOne(a) memset(a,-1,sizeof(a));
#define endl "\n"
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define reverseS string(curr.rbegin(),curr.rend()); //reverse string assignment
#define Read freopen("input.txt","r",stdin);
#define Write freopen("output.txt","w",stdout);
#define pb(x) push_back(x);
#define for1(n) for(int i = 0; i < n;i++)
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

//              D, U, R, L, DR, DL, UR, UL        D = Down, R = Right, L = Left, U = Up
vector<int> gx={1, -1, 0, 0, 1, 1, -1, -1},
            gy={0, 0, 1, -1, 1, -1, 1, -1};


//          Code Starts Here          //
//====================================//

/* const int N = (1e5)+10;

vector <pair<ll,ll>> g[N];
ll w[N] = {0};
//int visited[N];

void dijkstra(int s,int n){
    for1(N){
        w[i] = INT64_MAX;
    }
    priority_queue <pair<ll,ll>>pq;
    vector <int> loc(N+1,-1);
    w[s] = 0;
    loc[s] = 0;
    pq.push({0,s});
    while(!pq.empty()){
        auto node = pq.top();
        int v = node.second;
        int wv = node.first;
        pq.pop();
        if(v != w[wv]) continue;
        for(auto ch: g[v]){
            if(ch.second + wv < w[ch.first]){
                w[ch.first] = ch.second + wv;
                loc[ch.first] = v;
                pq.push({w[ch.first],ch.first});
            }
        }
    }
    /* for(int i = 1; i <= n;i++){
        cout << w[i] << endl;
    }  */
    /* int tmp = loc[n];
    vector <int> ans;
    ans.pb(n);
    //cout << tmp << endl;
    while(tmp != 0){
        //cout << tmp << endl;
        if(tmp == -1){
           cout << -1 << endl;
           return; 
        } 
        ans.pb(tmp);
        tmp = loc[tmp];
    }
    reverse(ans.begin(),ans.end());
    for(auto a: ans){
        cout << a << " ";
    }
} */ 

# define INF INT64_MAX

// iPair ==> Integer Pair
typedef pair<ll, ll> iPair;

// This class represents a directed graph using
// adjacency list representation
class Graph
{
	int V; // No. of vertices

	// In a weighted graph, we need to store vertex
	// and weight pair for every edge
	list< pair<ll, ll> > *adj;

public:
	Graph(ll V); // Constructor

	// function to add an edge to graph
	void addEdge(int u, int v, int w);

	// prints shortest path from s
	void shortestPath(int s);
};

// Allocates memory for adjacency list
Graph::Graph(ll V)
{
	this->V = V;
	adj = new list<iPair> [V];
}

void Graph::addEdge(int u, int v, int w)
{
	adj[u].push_back(make_pair(v, w));
	adj[v].push_back(make_pair(u, w));
}

// Prints shortest paths from src to all other vertices
void Graph::shortestPath(int src)
{
	// Create a priority queue to store vertices that
	// are being preprocessed. This is weird syntax in C++.
	// Refer below link for details of this syntax
	// https://www.geeksforgeeks.org/implement-min-heap-using-stl/
	priority_queue< iPair, vector <iPair> , greater<iPair> > pq;

	// Create a vector for distances and initialize all
	// distances as infinite (INF)
	vector<ll> dist(V, INF);
	vector<ll> loc(V, -1);
	// Insert source itself in priority queue and initialize
	// its distance as 0.
	pq.push(make_pair(0, src));
	dist[src] = 0;
	loc[src] = 0;
	vector<bool> f(V, false);

	/* Looping till priority queue becomes empty (or all
	distances are not finalized) */
	while (!pq.empty())
	{
		// The first vertex in pair is the minimum distance
		// vertex, extract it from priority queue.
		// vertex label is stored in second of pair (it
		// has to be done this way to keep the vertices
		// sorted distance (distance must be first item
		// in pair)
		ll u = pq.top().second;
		pq.pop();
		f[u] = true;

		// 'i' is used to get all adjacent vertices of a vertex
		list< pair<ll, ll> >::iterator i;
		for (i = adj[u].begin(); i != adj[u].end(); ++i)
		{
			// Get vertex label and weight of current adjacent
			// of u.
			ll v = (*i).first;
			ll weight = (*i).second;

			// If there is shorted path to v through u.
			if (f[v] == false && dist[v] > dist[u] + weight)
			{
				// Updating distance of v
				dist[v] = dist[u] + weight;
                loc[v] = u;
				pq.push(make_pair(dist[v], v));
			}
		}
	}

    ll tmp = loc[V-1];
    vector <int> ans;
    ans.pb(V-1);
   // cout << tmp << endl;
    while(tmp != 0){
       // cout << tmp << endl;
        if(tmp == -1){
           cout << -1 << endl;
           return; 
        } 
        ans.pb(tmp);
        tmp = loc[tmp];
    }
    reverse(ans.begin(),ans.end());
    for(auto a: ans){
        cout << a << " ";
    }
	// Print shortest distances stored in dist[]
	/* printf("Vertex Distance from Source\n");
	for (int i = 0; i < V; ++i)
		printf("%d \t\t %d\n", i, dist[i]); */
}


void solve(){
    ll n,m;
    cin >> n >> m;
    Graph g(n+1);
    for1(m){
        ll a,b,wt;
        cin >> a >> b >> wt;
        if(a==b)continue;
        g.addEdge(a,b,wt);
        g.addEdge(b,a,wt);
    }
    /* for(auto a: g){
        for(auto b: a){
            cout << b.first << " " << b.second << " | ";
        }
        cout << endl;
    } */
    g.shortestPath(1);
}

//FuzzyCarnage
int main()
{
    //Boost;
    //Read;Write;
    /* int t;
    cin >> t;
    while(t--)  */
        solve();
    

}











