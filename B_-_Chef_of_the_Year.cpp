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

int checkPalindrome(string str)
{
    int len = str.length();
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1])
            return false;
    }
    return true;
}

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    ll cnt = 0,cn = n-1;
    while(true){
        cout << s << endl;
        cnt++;
        if(s[n-1] != '9'){
            s[n-1]++;
        }
        else{
            cout << s << endl;
            s[n-1] = '0';
            cn = n -1;
            while(true){
                    cout << s  << " " << cn<< endl;
                cn--;
                if(cn < 0){
                    s = '1'+ s;
                    n++;
                    break;
                }
                if(s[cn] != '9'){
                    s[cn]++;
                    break;
                }
                s[cn] = '0';
            }
        }
        if(checkPalindrome(s)) break;
    }
    cout << s << endl;
    cout << cnt << endl;
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











