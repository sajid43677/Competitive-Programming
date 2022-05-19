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
    string st,st1;
    st1 = "";
    set <string> pq;
    int cnt = 0;
    while(cin >> st){
        int n = st.size();
        for1(n){
            if(isalpha(st[i])){
                st1 += tolower(st[i]);
            }
            else if (st1 != "")
            {
                pq.insert(st1);
                st1 = "";
            }
        }
        if (st1 != "")
            pq.insert(st1);
        st1 = "";
    }
    for(auto c: pq){
        cout << c << endl;
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











