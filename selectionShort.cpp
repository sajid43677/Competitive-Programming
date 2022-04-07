#include<iostream>

using namespace std;

void selectionShort(int arr[],int n){
    int select,minIndex,minValue;
    for(select = 0; select < n-1; select++){
        minIndex = select;
        minValue = arr[select];
        for(int i = select + 1; i < n; i++){
            if(arr[i] < minValue){
                minIndex = i;
                minValue = arr[i];
            }
        }
        arr[minIndex] = arr[select];
        arr[select] = minValue;
    }
}

int main(){
    int arr[] = {4,6,2,8,9,12,54,1,4};

    selectionShort(arr,9);

    for(int j = 0; j < 9; j++){
        cout << arr[j] << " ";
    }
    return 0;

}

