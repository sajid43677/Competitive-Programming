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
    double x1,x2,y1,y2,x3,x4,y3,y4,m1,m2;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    x1 = abs(x1);
    x2 = abs(x2);
    x3 = abs(x3);
    x4 = abs(x4);
    y1 = abs(y1);
    y2 = abs(y2);
    y3 = abs(y3);
    y4 = abs(y4);
    if(x1 > x2 && y1 > y1){
        swap(x1,x2);
        swap(y1,y2);
    }
    if(x3 > x4 && y3 > y4){
        swap(x3,x4);
        swap(y3,y4);
    }
    priority_queue<pair<double,double>> pq;
    pq.push({x1,y1});
    pq.push({x2,y2});
    pq.push({x3,y3});
    pq.push({x4,y4});
    pq.pop();
    x1 = pq.top().first;
    y1 = pq.top().second;
    pq.pop();
    x2 = pq.top().first;
    y2 = pq.top().second;
     m1 = (x2-x1)*(x2-x1);
     m2 = (y2-y1)*(y2-y1);
    m1 = sqrt(m1 + m2);
    if(m1 == 0){
        cout << "0.00000000000000000000" << endl;
        return;
    }
    cout << setprecision(21)<< m1 << endl;

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











