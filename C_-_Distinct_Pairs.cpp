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
    int n,m;
    cin >> n >> m;
    vector <pair<int,int>> vc1(n);
    vector <pair<int,int>> vc2(m);
    for1(n){
        cin >> vc1[i].first;
        vc1[i].second = i;
    }
    for1(m){
        cin >> vc2[i].first;
        vc2[i].second = i;
    }
    sort(vc1.begin(),vc1.end());
    sort(vc2.begin(),vc2.end());
    for1(m){
        cout << vc1[0].second << " " << vc2[i].second << endl;
    }
    for(int i = 1; i < n;i++){
        cout << vc1[i].second << " " << vc2[m-1].second << endl;
    }
}

//FuzzyCarnage
int main()
{
    Boost;
    //Read;Write;
   /*  int t;
    cin >> t;
    while(t--) */ 
        solve();
    

}











