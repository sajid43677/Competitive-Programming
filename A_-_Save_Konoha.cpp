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

void solve(){
    int n,z,a;
    cin >> n >> z;
    priority_queue <int> pq;
    for1(n){
        cin >> a;
        pq.push(a);
    }
    int cnt = 0;
    while(pq.top() != 0){
        if(z < 1) break;
        a = pq.top();
        pq.pop();
        //cout << a << endl;
        z -= a;
        a = a/2;
        pq.push(a);
        cnt++;
    }
    if(z > 0){
        cout << "Evacuate" << endl;
    }
    else{
        cout << cnt << endl;
    }
}

//FuzzyCarnage
int main()
{
    Boost;
    //Read;Write;
    int t;
    cin >> t;
    while(t--) 
        solve();
    

}











