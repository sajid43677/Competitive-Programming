
#include<iostream>

using namespace std;

void countingSort(int arr[],int n){
    int high = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > high){
            high = arr[i];
        }
    }
    int cnt[high+1] = {-1};
    for(int i = 0; i < n; i++){
        cnt[arr[i]]++;
    }

    for(int i = 1; i <=high; i++){
        cnt[i] = cnt[i] + cnt[i-1];
    }
    int b[n] = {0};
    for(int i = n-1; i >=0 ; i--){
        b[cnt[arr[i]]] = arr[i];
        cnt[arr[i]]--;
    }

    for(int i = 0; i < n; i++){
        arr[i] = b[i];
    }
}

int main(){
    int arr[6] = {6,5,9,2,1,-8};
    int low = arr[0];
    for(int i = 1; i < 6; i++){
        if(arr[i] < low){
            low = arr[i];
        }
    }
    for(int i = 0; i < 6; i++){
        arr[i] = arr[i] - low;
    }

    countingSort(arr,6);
    for(int i = 0; i < 6; i++){
            cout << arr[i]+low  << " ";
    }
}
