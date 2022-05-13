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
    string s;
    int n = 0;
    cin >> s;
    int len = s.size();
    //cout << len << endl;
    stack <char> st;
    int cnt = 0;
    st.push(s[0]);
    for(int i = 1; i < len; i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
            st.push(s[i]);
            continue;
        }
        if(st.empty()){
            cnt = -1;
            break;
        }
        if(st.top() == '(' && s[i] == ')'){
            st.pop();
            continue;
        }
        if(st.top() == '{' && s[i] == '}'){
            st.pop();
            continue;
        }
        if(st.top() == '[' && s[i] == ']'){
            st.pop();
            continue;
        }
        cnt = -1;
        break;

    }
    n = st.size();
    if(n==0 && cnt == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
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











