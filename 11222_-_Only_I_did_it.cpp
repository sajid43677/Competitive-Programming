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
    int t;
    cin >> t;
    for(int z = 1; z <= t; z++){
        cout << "Case #" << z << ":"<<endl;
        int arr[3][1002] = {0};
        set <int> st;
        map <int,int> mp;
        int flag = 0;
        int cnt[3] = {0};
        for(int j = 0; j < 3;j++){
            flag = 0;
            cin >> cnt[j];
            for1(cnt[j]){
                cin >> arr[j][i]; 
                st.insert(arr[j][i]);
            }
            for(auto c: st){
                mp[c]++;
            }
            st.clear();
            //arr[j][cnt] = -2;
        }
        int ms[3] = {0};
        for(int j = 0; j < 3; j++){
            for1(cnt[j]){
                if(mp[arr[j][i]] == 1){
                    ms[j]++;
                }
                else{
                    arr[j][i] = -1;
                }
            }
        }
        int mx = max(ms[0],max(ms[1],ms[2]));
        if(mx == ms[0]){
            cout << "1 " << ms[0] << " ";
            sort(arr[0],arr[0]+cnt[0]);
            for1(cnt[0]-1){
                if(arr[0][i] == -1){
                    continue;
                }
                cout << arr[0][i] << " ";
            }
            cout << arr[0][cnt[0]-1]<< endl;
        }
        if(mx == ms[1]){
            cout << "2 "<< ms[1] << " ";
            sort(arr[1],arr[1]+cnt[1]);
            for1(cnt[1]-1){
                if(arr[1][i] == -1){
                    continue;
                }
                cout << arr[1][i] << " ";
            }
            cout <<arr[1][cnt[1]-1]<< endl;
        }
        if(mx == ms[2]){
            cout << "3 "<< ms[2] << " ";
            sort(arr[2],arr[2]+cnt[2]);
            for1(cnt[2]-1){
                if(arr[2][i] == -1){
                    continue;
                }
                cout << arr[2][i] << " ";
            }
            cout <<arr[2][cnt[2]-1]<< endl;
        }

    }

}

int main()
{
    Boost;
    Read;Write;
    solve();
    

}











