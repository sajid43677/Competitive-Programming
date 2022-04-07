#include<iostream>
#define maxComm 10
using namespace std;




class Robot
{
    int Front = -1;
    int Rear = -1;
    int Q[maxComm];

    
public:
    int saveCommandInMemory(int command)
    {

        if((Rear+1)%maxComm == Front)
        {
            cout<<"Can't save! Command is Full\n";
            return -1;
        }

        Rear = (Rear+1)%maxComm;
        if(Front == -1)
        {
            Front=(Front+1)%maxComm;
        }
        Q[Rear]=command;
        return 1;
    }

    int getCommandForExecution()
    {

        if(Front == -1 && Rear == -1)
        {
            cout<<"Can't exequte! No command given\n";
            return -1;
        }

        int temp;
        temp = Q[Front];
     
        if(Front == Rear)
        {
            Front =-1;
            Rear = -1;
        }
        else{
            Front=(Front+1)%maxComm;
        }

        return temp;
    }
    void printAllCommands(){
        int count = 1;
        if(Front == -1){
            cout << "Command is empty\n";
        }
        else{
            for(int i = Front;; i = (i+1)%maxComm){
            if(i==Rear){
                cout <<"Command "<< count << ": "<< Q[i] << " \n";
                break;
            }
            cout <<"Command "<< count << ": " << Q[i] << " \n";
            count++;
        }
        }  
        }

};

int main()
{
    int a[10];

    Robot task;
    task.saveCommandInMemory(30);
    task.saveCommandInMemory(10);
    task.saveCommandInMemory(40);
    task.saveCommandInMemory(60);
    task.saveCommandInMemory(40);
    task.saveCommandInMemory(80);
    task.saveCommandInMemory(90);
    task.saveCommandInMemory(11);
    task.saveCommandInMemory(22);
    task.saveCommandInMemory(33);
    task.saveCommandInMemory(44);

    task.printAllCommands();   
   
    cout<<task.getCommandForExecution()<<" Executed\n";
    cout<<task.getCommandForExecution()<<" Executed\n";
    cout<<task.getCommandForExecution()<<" Executed\n";
    cout<<task.getCommandForExecution()<<" Executed\n";
    cout<<task.getCommandForExecution()<<" Executed\n";
    cout<<task.getCommandForExecution()<<" Executed\n";
    cout<<task.getCommandForExecution()<<" Executed\n";
    cout<<task.getCommandForExecution()<<" Executed\n";
    cout<<task.getCommandForExecution()<<" Executed\n";
    cout<<task.getCommandForExecution()<<" Executed\n";

    task.printAllCommands();

    task.saveCommandInMemory(11);
    task.saveCommandInMemory(22);
    task.saveCommandInMemory(33);
    task.saveCommandInMemory(44);
    
    task.printAllCommands();

    return 0;
}
