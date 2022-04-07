#include<iostream>

using namespace std;

void insertionShort(int arr[], int n){
    for(int j = 1; j <= n; j++){
        int key = arr[j];
        int i = j - 1;
        while(i >= 0 && arr[i] > key){
            arr[i+1] = arr[i];
            i--;
        }
        arr[i+1] = key;
    }
}

int main(){
    int arr[] = {4,6,2,8,9,12,54,1,4};

    insertionShort(arr,9);
    for(int j = 0; j < 9; j++){
        cout << arr[j] << " ";
    }
    return 0;

}
