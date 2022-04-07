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

int sumOfDigit(long long num){
    int sum = 0;
    while(num!=0)
    {
        sum += num % 10;
        num = num / 10;
    }
    return sum;
}

void solve(){
    string s;
    cin >> s;
    ll sum = 0;
    for1(s.size()){
        sum += s[i] - '0';
    }
    ll cnt = 1;
    while(true){
        if(sum < 10){
            break;
        }
        sum = sumOfDigit(sum);
        cnt++;
    }
    if(s.size() == 1){
        cnt = 0;
    }
    cout << cnt << endl;
}

int main()
{
    Boost;
    //Read;Write;
    /* int t;
    cin >> t;
    while(t--) */ 
        solve();
    

}











