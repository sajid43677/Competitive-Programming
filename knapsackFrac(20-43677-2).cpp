#include<iostream>

using namespace std;





int main()
{
   int itemNum;
   cout << "Total number of item: ";
   cin >> itemNum;
   int s[itemNum] = {0};
   int w[itemNum] = {0};
   cout << "Put benifit and weight for each item: "<< endl;
   for(int i = 0; i < itemNum;i++){
        cin >> s[i];
        cin >> w[i];
   }
   int v[itemNum] = {0};
    for(int i = 0; i < itemNum;i++){
        v[i] = s[i]/w[i];
   }
   int wm = 0;
   int wx = 0;
   cout << "Weight of our knpsack: ";
   cin >> wx;
   int x[itemNum] = {0};
   while(wm < wx){
        int cnt = 0;
        int flag = 0;
        for(int i = 0; i < itemNum;i++){
            if(v[i] > cnt){
                cnt = v[i];
                flag = i;
            }
        }
        v[flag] = 0;
        x[flag] = min(w[flag],wx-wm);
        wm = wm + x[flag];
   }
   for(int i = 0 ;i < itemNum; i++){
        cout << "For " << s[i] << " our knapsack will take: "<< x[i] << endl;
   }


}













