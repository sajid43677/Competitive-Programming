#include <iostream>
using namespace std;

class node
{
    public:
    int data;
    node *left;
    node *right;
};

class BST
{
    node *root=NULL;
    public:

    node * getRoot(){return root;}
    void setRoot(node *n){root = n;}

    void _insert(int value)
    {
        node *n = new node;
        n->data = value;
        n->left = NULL;
        n->right = NULL;

        if(root==NULL)
        {
            root = n;
        }
        else
        {
            node *temp = root;
            while(true)
            {
                if(temp->data==value)
                {
                    break;
                }
                else if(temp->data > value)
                {
                    if(temp->left == NULL)
                    {
                        temp->left = n;
                        break;
                    }
                    else
                    {
                        temp = temp->left;
                    }
                }
                else if(temp->data < value)
                {
                    if(temp->right == NULL)
                    {
                        temp->right = n;
                        break;
                    }
                    else
                    {
                        temp = temp->right;
                    }
                }
            }
        }
    }


    node * inorder(node *n, int a[], int *index)
    {

            int i;
            for(i=1;i<9;i++)
            {
                int j;
                int v;
                v=a[i];
                j=i-1;
                while(a[j]>v && j>=0)
                {
                    a[j+1]=a[j];
                    j--;
                }

                a[j+1] = v;
            }

        if(n==NULL)
            {
        return NULL;
            }

        inorder(n->left,a,index);
        cout<<n->data <<", ";
        inorder(n->left,a,index);

    }


};

int main()
{
    int arr[] = { 9, 2, 5, 3, 8, 11, 20, 1, 4};
    BST bst;


    int i;
    for(i=0; i<9; i++)
    {
        bst._insert(arr[i]);
    }


    int index = 0;
    bst.inorder(bst.getRoot(), arr, &index);

    cout<<endl<<"Sorted Output: ";
    for(i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}


