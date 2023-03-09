#include <bits/stdc++.h>
using namespace std;
 

class student{
    int id;
    string name;
    float cgpa;
    public:
    student(){}
    student(int id,string name,float cgpa){
        this->id = id;
        this->name = name;
        this->cgpa = cgpa;
    }
    int getId(){
        return this->id;
    }
    float getCg(){
        return this->cgpa;
    }
    string getName(){
        return this->name;
    }
};


struct Node {
    student data;
    Node* left;
    Node* right;
};
 
// Function to create a new node
Node* CreateNode(student s)
{
    Node* newNode = new Node();
    if (!newNode) {
        cout << "Memory error\n";
        return NULL;
    }
    newNode->data = s;
    newNode->left = newNode->right = NULL;
    return newNode;
}
 
// Function to insert element in binary tree
Node* InsertNode(Node* root, student data)
{
    
    Node* currNode = root;
        if(currNode == NULL){
            currNode = CreateNode(data);
            return currNode;
        }
        if(currNode->data.getCg() > data.getCg()){
            currNode->right = InsertNode(currNode->right,data);
        }
        else if(currNode->data.getCg() < data.getCg()){
            currNode->left = InsertNode(currNode->left,data);
        }
        return currNode;
}
 
/* Inorder traversal of a binary tree */
 
void inorder(Node* temp)
{
    if (temp == NULL)
        return;
    inorder(temp->left);
    cout << temp->data.getName() << ' ';
    inorder(temp->right);
}

 
// Driver code
int main()
{
    student s1(10,"Richard",3.8);
    Node* root = CreateNode(s1);
 
 
    student s2(107,"John",3.9);
    student s3(100,"Miller",3.5);
    root = InsertNode(root, s2);
    root = InsertNode(root, s3);
 
    //cout << "Inorder traversal after insertion: ";
    //inorder(root);
    inorder(root);
    cout << endl;
 
    return 0;
}