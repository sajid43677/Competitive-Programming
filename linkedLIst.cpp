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
            node *currentNode = new node;
            currentNode = head;
            int index = 0;
            for(index = 0; index<pos;index++){
                currentNode=currentNode->next;
            }
            node *newNode = new node;
            newNode->data = key;
            newNode->next = currentNode->next;
            currentNode->next = newNode;
        }
    }
    SinglyLinkedListNode insertNodeAtTail(SinglyLinkedListNode *head,int data)
    {
        if(head==NULL)
        {
            head->data = data;
            head->next = NULL;
        }
        else
        {
            while(head->next!=NULL)
            {
                head=head->next;
            }
            head->next->data = data;
            head->next->next = NULL;
        }
        return head;

    }
    void deleteFirst()
    {
        if(head == NULL){
            cout << "List is empty";
        }
        else{
            node *temp = head;
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
            node *currentNode = head;
            node *previousNode = new node;
            if(head->next == NULL){
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
    SinglyLinkedListNode deleteNode(SinglyLinkedListNode llist->head,int position)
    {

            if(position == 0){
                if(head == NULL){
                    return NULL;
                }
                else{
                    SinglyLinkedListNode *temp = head;
                    head = head->next;
                    delete temp;
                    return *head;
                }
            }
            else{
                SinglyLinkedListNode *currentNode = head;
                    for(int index = 0;index<position;index++){
                        currentNode = currentNode->next;
                    }
                    SinglyLinkedListNode *temp = currentNode->next;
                    currentNode->next = temp->next;
                    delete temp;
                    return *head;
            }
    }
    void Remove(int key)
    {
        if(head == NULL){
            cout<< "List is empty"<<endl;
        }
        else{
            node *currentNode = head;
            node *previousNode = new node;
            while (currentNode != NULL)
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
                        node *temp = currentNode;
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
        node *currentNode = head;
        while (currentNode != NULL)
        {
            counter++;
            currentNode = currentNode->next;
        }
        return counter;
    }
    void printLinkedList(SinglyLinkedListNode *head)
    {
        while(head==NULL)
        {
            cout<<" "<<"\n";
            return;
        }
        printLinkedList(head->next);
        cout << head->data <<"\n";
    }
};

int main()
{
    LinkedList List;
    int t,n,m;
    cin >> t;
    m = t;
    while(t--){
        cin >> n;
        if(t==m)
            List.insertAtLast(n);
        else
            List.insertAtLast(n);
    }
    List.printList();
    return 0;
}
