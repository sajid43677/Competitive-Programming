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

int arr[1441];

void nod(int n){
    int cnt = 0;
    for(int i = 1; i*i < n; i++){
        if(n%i==0){
            arr[i] = 1;
            if(i != n/i) arr[n/i] = 1;
        }
    }
}


void solve(){
    string t;
    int n,cnt=0;
    cin >> t >> n;
    int h = n/60;
    int m = n%60;
    int x = (t[0]-'0')*10 + (t[1]-'0');
    int y = (t[4]-'0')*10 + (t[3]-'0');
    if(x == y) {
        cnt++;
    }
    y = (t[3]-'0')*10 + (t[4]-'0');
    int x1 = x,y1=y;
    int k = 1440/n -1,tmp;
    set <pair<int,int>> st;
    pair <int,int> pr;
    if(cnt>0){
        pr.first = x;
        pr.second = y;
        st.insert(pr);
    }
    while(true){
        x = x+h;
        y = y+m;
        if(y >= 60){
            x++;
            y = y%60;
        }
        x = x%24;
        //cout <<x <<" "<<y <<endl;
        if(x1==x && y1 == y) break;
        tmp = y;
        y = (tmp%10)*10 + tmp/10;
        if(x == y){ 
            pr.first = x;
            pr.second = tmp;
            st.insert(pr);
        }
        y = tmp;
    }
    cout << st.size() << endl;

}

//FuzzyCarnage
int main()
{
    Boost;
    //nod(1440);
    //Read;Write;
    int t;
    cin >> t;
    while(t--) 
        solve();
    

}











