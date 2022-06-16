#include <bits/stdc++.h>
using namespace std;


typedef long long ll;

//double pi = acos(-1.0);

#define allZero(a) memset(a,0,sizeof(a));
#define allnegOne(a) memset(a,-1,sizeof(a));
#define endl "\n"
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define reverseS(curr) string(curr.rbegin(),curr.rend()); //reverse string assignment
#define Read freopen("input.txt","r",stdin);
#define Write freopen("output.txt","w",stdout);
#define pb(x) push_back(x);
#define for1(n) for(int i = 0; i < n;i++)

void solve(){
    string s;
    cin >> s;
    s += "$";
    int n = s.size();
    vector <int> p(n),c(n);
    {
        vector <pair<char,int>> a(n);
        for1(n) a[i] = {s[i],i};
        sort(a.begin(),a.end());
        for1(n) p[i] = a[i].second;
        c[p[0]] = 0;
        for(int i = 1; i < n;i++){
            if(a[i].first == a[i-1].first){
                c[p[i]] = c[p[i-1]];
            }
            else{
                c[p[i]] = c[p[i-1]] + 1;
            }
        }
    }
    int k = 0;
    while((1 << k) < n){
        vector <pair<pair<int,int>,int>> a(n);
        for(int i = 0; i < n; i++){
            a[i] = {{c[i],c[(i + (1 << k))%n]},i};
        }
        sort(a.begin(),a.end());
        for1(n) p[i] = a[i].second;
        c[p[0]] = 0;
        for(int i = 1; i < n;i++){
            if(a[i].first == a[i-1].first){
                c[p[i]] = c[p[i-1]];
            }
            else{
                c[p[i]] = c[p[i-1]] + 1;
            }
        }
        k++;
    }
    for1(n) cout << p[i] << " " << s.substr(p[i],n-p[i]) << endl;
}

//FuzzyCarnage
int main()
{
    Boost;
    //Read;Write;
    /* int t;
    cin >> t;
    while(t--) */ 
        solve();
    

}











