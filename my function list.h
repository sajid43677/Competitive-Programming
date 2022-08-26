#include <bits/stdc++.h>
using namespace std;
//sum of digits
//===============
int sumOfDigit(long long num){
    int sum = 0;
    while(num!=0)
    {
        sum += num % 10;
        num = num / 10;
    }
    return sum;
}
//sum of digits untill one digit.
int singleDigit(int num){
    int sum = 0;
    while(true){
            sum = sumOfDigit(num);
            num = sum;
            if(sum < 10){
                return sum;
            }
        }

}
//sum of chars of a string where a = 1,b=2 ....z=26
int sumOfChar(string s){
    int sum1 = 0;
    for(int i = 0; i < s.length(); i ++){
        if(s[i] <= 'Z' && s[i] >='A'){
                sum1 = sum1 + (s[i] - 'A' + 1);
            }
            if(s[i] <= 'z' && s[i] >='a'){
                sum1 = sum1 + (s[i] - 'a' + 1);
            }
    }
    return sum1;
}
//reverse a number
// ==================
int reversDigits(int num)
{
    int rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}
//palindrome check
// ====================
int checkPalindrome(string str)
{
    // Calculating string length
    int len = str.length();

    // Traversing through the string
    // upto hlaf its length
    for (int i = 0; i < len / 2; i++) {

        // Comparing i th character
        // from starting and len-i
        // th character from end
        if (str[i] != str[len - i - 1])
            return false;
    }

    // If the above loop doesn't return then it is
    // palindrome
    return true;
}

//Sub sequence string check
// ============================
bool isSubSequence(string stm, string st){
    int len,lenm;
    int flag=0;
    len = st.length();
    lenm = stm.length() - 1;
    for(int i = 0; i <= lenm; i++){
        if(st[flag] == stm[i]){
            flag++;
        }
        if(flag == len){
            return true;
        }
    }
    return false;
}

//gcd in recursive and lcd
// ==========================
int gcd(int i , int j){
    if(i == 0)
        return j;
    return gcd(j%i,i);
}

int lcd(int i , int j){
    return (i*j)/gcd(i,j);
}

//sieve of prime
// ================
long long is_prime[10000000];
void sieve_prime(){
	int n = 1000000;
	is_prime[0] = is_prime[1] = 1;
	for (long long i = 2; i * i <= n; i++) {
		if (is_prime[i]) {
			for (long long j = i * i; j <= n; j += i)
				is_prime[j] = 1;
		}
	}
}

//count number of 1's of binary representation of a integer
// ============================================================
int cntOne(ll n){
    int cnt = 0;
    while(n!=0){
        n = n&(n-1);
        cnt++;
    }
return cnt;
}

//determine the number power of 2 or not
// ========================================
bool po2(int n){
    if(n==0)
        return false;
    if(!(n&(n-1)))
        return true;
    return false;
}

//determine ith bit of a number is set or not(1 or 0)
// =====================================================
bool ithSet(int n)
{
    if( n & (1 << i) )
        return true;
    else
        return false;
}

//for getting possible subset of a string
// =========================================
string sr[100000];

void subSets(string s){
    int n = s.size();
    int cnt = 0;
    if(n==0){
        return;
    }
    for(int i = 0; i < (1<<n); i++){
            sr[cnt] = "";
        for(int j = 0; j < n;j++){
            if(i & (1 << j)){
                sr[cnt] = sr[cnt] + s[j];
            }
        }
        cnt++;
    }
}

//total number of divisors of given number
// ==========================================
int nod(int n){
    int cnt = 0;
    for(int i = 1; i*i < n; i++){
        if(n%i==0){
            cnt++;
            if(i != n/i) cnt++;
        }
    }
    return cnt;
}

//largest power of 2 (most significant bit in binary form), which is less than or equal to the given number N
// ===============================================================================================================
ll large2p(ll N){
    N = N| (N>>1);
    N = N| (N>>2);
    N = N| (N>>4);
    N = N| (N>>8);//16 bit stop here
    N = N| (N>>16);//32 bit stop here
    N = N| (N>>32);//64 bit stop here

    return (N+1) >> 1;
}

//Returns the rightmost 1 in decimal representation of x
// ========================================================
int num = n & (-n);


//exponentiation modulas (x^n)%mod
// ===============================
ll exp(ll x, ll n, ll mod)
{
    if(n==0) return 1;
    if(n==1) return x;
    if(n%2==0) return exp((x*x)%mod,n/2,mod);
    if(n%2==1) return (x*exp((x*x)%mod,n/2,mod))%mod;
}


//vector second element sort function decending
// =============================================
bool srt(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second > b.second);
}


//line to words
// ===============
vector <string> ltow;

void ltw(string s){
    stringstream chk(s);
    string flg;
    while(chk >> flg){
        ltow.push_back(flg);
    }
}

//decimal to binary string format
// =================================

string decimalToBinary(ll n)
{

    string s = bitset<64> (n).to_string();

    const auto loc1 = s.find('1');

    if(loc1 != string::npos)
        return s.substr(loc1);

    return "0";
}

//number of co primes of n less than n
// ======================================
int phi (int n) {
	int result = n;
	for (int i=2; i*i<=n; ++i)
		if (n % i == 0) {
			while (n % i == 0)
				n /= i;
			result -= result / i;
		}
	if (n > 1)
		result -= result / n;
	return result;
}

//bigmod
// =========
ll bigmod(ll a, ll b, ll m){
    if(b==0){
        return 1;
    }
    ll x = bigmod(a,b/2,m);
    x = (x*x) % m;
    if(b%2==1){
        x = (x*a) % m;
    }
    return x;
}

//total digits in factorial of x
// ================================
ll digitsFact(ll x){
    double ans = 0;
    for(int i = 1; i <=x;i++){
        ans = ans + log10(i);
    }
    ll ans2 = floor(ans) + 1;
    return ans;
}

//ternary search
================
int ternarySearch(int arr[], int n,int k){
    int l = 0;
    int r = n-1;
    int mid1,mid2;
    while(l<=r){
        mid1 = l+(r-l)/3;
        mid2 = r-(r-l)/3;
        if(arr[mid1] == k){
            return mid1;
        }
        
        if(arr[mid2] == k){
            return mid2;
        }
        if(arr[mid1] > k){
            r = mid1 - 1;
        }
        else if(arr[mid2] > k){
            l = mid1 + 1;
            r = mid2 - 1;
        }
        else{
            l = mid2 + 1;
        }
    }
    return -1;
}

//Binary search
=================
void binarySearch(int array[],int x,int n){
    int k = 0;
    for (int b = n/2; b >= 1; b /= 2) {
        while (k+b < n && array[k+b] <= x) k += b;
    }
    if (array[k] == x) {
        cout << "The element" << x << " is found" << endl;
    }
}


//sum of divisors of a given number
===================================
ll sod(int n){
    ll sum = 0;
    for(int i = 1; i <= sqrt(n); i++){
        if(n%i == 0){
            if(n/i == i) sum += i;
            else sum = sum + i + n/i;
        }
    }
    return sum;
}


//more efficient seive and nod
==============================
ll is_prime[mx+1],siv[mx+1],cnt;
void sieve_prime(){
	long long int i, j;
    for (i=3; i<mx; i+=2)
        if(!siv[i])
            for (j=i*i; j<mx; j+=i+i)
                siv[j]=1;
    is_prime[cnt++]=2;
    for (i=3; i<mx; i+=2)
        if(!siv[i]) is_prime[cnt++]=i;
    return;
}

ll nod(ll n)
{
   ll sum = 1,k = 0;
   for(int i=0;i<mx && is_prime[i]*is_prime[i]<=n;i++)
        {
            if(n%is_prime[i]==0)
            {
                k=0;
                while(n%is_prime[i]==0)
                {
                    n/=is_prime[i];
                    k++;
                    if(n==0 || n==1)
                        break;
                }
                sum*=k+1;
            }

        }
        if(n!=1) sum = sum*2;
        return sum-1;
}

// bfs
=========
vector <int> vc[100];
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


//dijkstra algo (if node number is n then pass graph(n+1))
===========================================================
# define INF INT64_MAX

// iPair ==> long long Pair
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








