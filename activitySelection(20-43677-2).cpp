#include<bits/stdc++.h>

using namespace std;

bool cnt(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}


int main()
{
    vector <pair<int,int>> sf;
    int n = 0;
    cout << "Enter total activity number: ";
    cin >> n;
    int a,b;
    cout << "Enter each activity start and ending time: "<< endl;
    for (int i=0; i<n; i++){
            cin >> a >> b;
        sf.push_back(make_pair(a,b));
    }

    sort(sf.begin(),sf.end(),cnt);

//    for (int i=0; i<n; i++)
//    {
//        cout << sf[i].first << " "
//             << sf[i].second << endl;
//    }
    vector <pair<int,int>> last;
    last.push_back(make_pair(1,sf[0].first));
    int flag = sf[0].second;
    int cnt = 1;

    for(int i = 1; i < n; i++){
        if(flag < sf[i].first){
            cnt = i+1;
            last.push_back(make_pair(cnt,sf[i].first));
            flag = sf[i].second;
        }
    }
    n = last.size();
    for(int i = 0; i < n; i++){
        cout << last[i].first << endl;
    }

}





//1 4
//5 7
//0 6
//3 5
//6 10
//5 9
//3 9
//12 16
//8 12
//2 14
//8 11







