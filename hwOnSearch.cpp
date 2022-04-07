#include <iostream>
#include<string>

using namespace std;

class Student
{
public:
    int id;
    string name;
    float cgpa;
};


void selectionSort(Student arr[], int arrayLength)
{
    int i;
    for(i=0;i<arrayLength-1;i++)
    {
        int j;
        int k;

        k = i;
        //Find the minimum value from position i to end of the array
        for(j=i+1;j<arrayLength;j++)
        {
            if(arr[j].id<arr[k].id)
                k=j;
        }

        //Swap the value of index i and k
        int temp;
        temp = arr[i].id;
        arr[i].id = arr[k].id;
        arr[k].id = temp;
    }
}


void insertionSort(Student arr[], int arrayLength)
{
    int i;
    for(i=1;i<arrayLength;i++)
    {
        int j;
        int v;
        v=arr[i].id;
        j=i-1;
        while(arr[j].id>v && j>=0)
        {
            //arr[j+1]=arr[j];
            //j--;
            int temp;
            temp = arr[j+1].id;
            arr[j+1].id = arr[j].id;
            arr[j].id =temp;
            j--;
        }

        //arr[j+1] = v;
    }
}


int main()
{

    Student s1;
    s1.id= 5;
    s1.name="YZ";
    s1.cgpa = 3.5;

    Student s2;
    s2.id= 2;
    s2.name="PQ";
    s2.cgpa = 3.5;

    Student s3;
    s3.id= 8;
    s3.name="GH";
    s3.cgpa = 3.5;

    Student s4;
    s4.id= 3;
    s4.name="LK";
    s4.cgpa = 3.5;

    Student arr[4];
    arr[0] = s1;
    arr[1] = s2;
    arr[2] = s3;
    arr[3] = s4;


    // Modify the sorting algorithms to Sort this student array by their id
    selectionSort(arr,4);
    cout << "After selection sort: ";
    for(int i =  0;i < 4;i++){
        cout <<arr[i].id <<" ";
    }
    cout<<endl;
    arr[0] = s1;
    arr[1] = s2;
    arr[2] = s3;
    arr[3] = s4;

    insertionSort(arr,4);
    cout <<"After insertion sort: ";
    for(int i =  0;i < 4;i++){
        cout <<arr[i].id <<" ";
    }
    cout << endl;



    return 0;
}
