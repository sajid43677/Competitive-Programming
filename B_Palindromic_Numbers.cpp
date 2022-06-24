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
    int n;
    cin >> n;
    string s;
    cin >> s;
    string s1 = "";
    if(s[0] != '9'){
        int tmp = 0,carry = 0;
        for(int i = n -1; i > -1;i--){
            tmp = 9 - (s[i] - '0');
            s1 = char(tmp+'0') + s1;
            //cout << s1 << endl;
        }
        cout << s1 << endl;
        return;
    }
    else{
         int tmp = 0,carry = 0,sub = 0;
        for(int i = n -1; i > -1;i--){
            if(carry == 1){
                carry = 0;
                if(s[i] != '9'){
                    s[i]++;
                    sub = s[i] - '0';
                }
                else{
                    sub = 10;
                }
                
            }
            else{
                sub = s[i] - '0';
            }
            if(sub < 2) tmp = 1 - sub;
            else{
                tmp = 11 - sub;
                carry = 1;
            }
            s1 = char(tmp+'0') + s1;
            //cout << s1 << endl;
        }
        cout << s1 << endl;
        return;
    }
}

//FuzzyCarnage
int main()
{
    //Boost;
    //Read;Write;
    int t;
    cin >> t;
    while(t--) 
        solve();
    

}











