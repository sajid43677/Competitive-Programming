#include<iostream>
#define size 20
using namespace std;

class Stack
{
    int s[size];
    int top=-1; //Holds the index of the top value

public:
    int push(int value)
    {
        if(top-1 == size) 

        { 

            cout<<"Stack is Full! \n"; 

            return -1; 

        } 
        int i; 
         
        top++; 

        s[top] = value;  


        cout << s[top] <<" insertd in the stack"<<endl;

        return 1; 
    }


    int pop()
    {
         int i;
        if(top == -1){
            cout << "Stack is empty!" << endl;
            return -1;
        }
        int j = s[top];

        top--;
        return j;
    }
};



class Queue
{
    int Q[size];
    int Front = -1;
    int Rear = -1;

public:
    int enqueue(int value)
    {
        if(size == Rear + 1){
            cout << "Queue is full \n";
            return 0;
        }
        if(Rear == -1 && Front == -1){
        Rear++;
        Front++;
        Q[Rear] = value;
        cout << Q[Rear] <<" insertd in the Queue"<<endl;
        return 1;
        }

        Rear++;
        Q[Rear] = value;
        cout << Q[Rear] <<" insertd in the Queue"<<endl;
        return 1;
    }
    

    int dequeue()
    {
        //If not empty then return the Dequeued value
        if(Rear == -1 && Front == -1){
            cout << "Queue is empty \n";
            return 0;
        }
        if(Front == Rear){
            int j = Q[Front];
            Front = -1;
            Rear = -1;
            return j;
        }
        int j = Q[Front];
        Front++;
        return j;
    }
};




int main()
{
    Stack s;
    Queue Q;

    s.push(5);
    s.push(9);
    s.push(3);
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;


    Q.enqueue(5);
    Q.enqueue(8);
    Q.enqueue(9);
    cout<<Q.dequeue()<<endl;
    cout<<Q.dequeue()<<endl;
    cout<<Q.dequeue()<<endl;
    cout<<Q.dequeue()<<endl;


    return 0;
}

