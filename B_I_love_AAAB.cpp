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
    string s1;
    cin >> s1;
    int len = s1.size();
    if(s1[0]== 'B'){
        cout << "NO" <<endl;
        return;
    }
    if(len == 1){
        cout << "NO" << endl;
        return;
    }
    if(s1[len-1] == 'A'){
        cout << "NO" << endl;
        return;
    }
    stack <int> st;
    for1(len){
         //cout << s1[i] << " "<<i << endl;
        if(s1[i] == 'B'){
            if(st.empty()){
                //cout << s1[i] << " "<<i << endl;
                cout << "NO" << endl;
                return;
            }
            st.pop();
        }
        else{
            st.push(1);
        }
    }
    cout << "YES" << endl;
   
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











