#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};



class LinkedList
{
    node *head=NULL;
public:

    void insertAtFirst(int key)
    {
        node *n = new node;
        n->data = key;
        n->next  = head;
        head = n;
    }

    void insertAt(int pos, int key)
    {
        if(Count() <= pos){
            cout << "Invalid Position"<<endl;
        }
        else{
            node currentNode = new node;
            currentNode = head;
            int index = 0;
            for(index = 0; index<pos;index++){
                currentNode=currentNode->next;
            }
            node newNode = new node;
            newNode->data = key;
            newNode->next = currentNode->next;
            currentNode->next = newNode;
        }
    }

    void insertAtLast(int key)
    {
        node *n=new node;
        n->data=key;
        n->next=NULL;

        if(head==NULL)
        {
            head = n;
        }
        else
        {
            node *currentNode = head;
            while(currentNode->next!=NULL)
            {
                currentNode=currentNode->next;
            }

            currentNode->next=n;
        }



    }

    void deleteFirst()
    {
        if(head == NULL){
            cout << "List is empty";
        }
        else{
            node temp = head;
            head = head->next;
            delete temp;
        }
    }

    void deleteLast()
    {
         if(head == NULL){
            cout << "List is empty";
        }
        else{
            node currentNode = head;
            node previousNode = new node;
            if(head->next = NULL){
                currentNode = NULL;
                head = NULL;
            }
            else{
                while (currentNode->next != NULL)
                {
                    previousNode = currentNode;
                    currentNode = currentNode->next;
                }
                previousNode->next = NULL;
                delete currentNode;
                
            }
        }
    }

    void deleteAt(int pos)
    {
        
        if(Count() <= pos){
            cout << "Invalid Position"<<endl;
        }
        else{
            if(pos == 0){
                deleteFirst();
            }
            else{
                node currentNode = head;
                if (pos == count()-1)
                {
                    deleteLast();
                }
                else{
                    for(int index = 0;index<pos;index++){
                        currentNode = currentNode->next;
                    }
                    node temp = currentNode->next;
                    currentNode->next = temp->next;
                    delete temp;
                }
                
            }
        }
    }

    void Remove(int key)
    {
        if(head == NULL){
            cout<< "List is empty"<<endl;
        }
        else{
            node currentNode = head;
            node previousNode = new node;
            while (currentNode == NULL)
            {
                if(currentNode->data == key){
                    if(currentNode == head){
                        deleteFirst();
                        currentNode = head;
                        continue;
                    }
                
                    else if(currentNode->next == NULL){
                        previousNode->next = NULL;
                        delete currentNode;
                        break;
                    }
                    else{
                        previousNode->next = currentNode->next;
                        node temp = currentNode;
                        delete temp;
                        continue;
                    }
                }
                previousNode = currentNode;
                currentNode = currentNode->next;  
            }
            
        }
    }

    int Count()
    {
        int counter = 0;
        node currentNode = head;
        while (currentNode != NULL)
        {
            counter++;
            currentNode = currentNode->next;
        }
        return counter;
    }

    void printList()
    {
        node *currentNode = head;

        while(currentNode!=NULL)
        {
            cout<<currentNode->data<<" ";
            currentNode = currentNode->next;
        }
        cout<<endl;
    }

};



int main()
{
    LinkedList List;

    cout<<"Insert At First\n";
    List.insertAtFirst(10);
    List.printList();
    List.insertAtFirst(12);
    List.printList();
    List.insertAtFirst(9);
    List.printList();
    List.insertAtFirst(6);
    List.printList();
    cout<<"Insert At Last\n";
    List.insertAtLast(20);
    List.printList();
    List.insertAtLast(25);
    List.printList();
    List.insertAtLast(18);
    List.printList();
    return 0;
}
