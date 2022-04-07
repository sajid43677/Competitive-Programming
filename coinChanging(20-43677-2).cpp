#include <bits/stdc++.h>
using namespace std;


typedef long long ll;

#define endl "\n"
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main() {
    boost;
//    freopen("input.in","r",stdin);
//	freopen("output.in","w",stdout);
    int t;
    cin >> t;
    while(t--){
        ll p,q;
        cin >> p >> q;
        double d = 1.0*p/q;
        if(d*(q/p)==1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
