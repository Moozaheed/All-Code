#include<bits/stdc++.h>
using namespace std;
typedef struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int value)
    {
        data=value;
        left=NULL;
        right=NULL;
    }
}Nd;
void insert_to_left_or_right(Nd *root,int value_of_node)
{
    if(value_of_node>root->data)
    {
        if(root->right==NULL)
            root->right = new Nd(value_of_node);
        else
        {
            insert_to_left_or_right(root->right,value_of_node);
        }
    }
    else
    {
        if(root->left==NULL)
            root->left = new Nd(value_of_node);
        else
        {
            insert_to_left_or_right(root->left,value_of_node);
        }
    }
}
void inorder(Nd *root)
{
    if(root==NULL)
        return ;
    Nd* PTR=root;
    stack<Nd*>st;

    while(PTR!=NULL || !st.empty())
    {
        while(PTR!=NULL)
        {
            st.push(PTR);
            PTR=PTR->left;
        }
        PTR=st.top();
        cout<<PTR->data<<" ";
        st.pop();
        PTR=PTR->right;
    }
}
void preorder(Nd *root)
{
    Nd* PTR=root;
    stack<Nd*>st;
    if(root==NULL)return ;

        while(PTR!=NULL)
        {
            cout<<PTR->data<<" ";
            if(PTR->right!=NULL)
               {
                  st.push(PTR->right);
               }
            if(PTR->left!=NULL)PTR=PTR->left;
            else
            {
                PTR=st.top();
                st.pop();
            }
        }
        //inorder(root);
}
int main()
{
    int number_of_node,value_of_node;
    Nd *root=NULL;
    cout<<"Enter the number of node :\n";
    cin>>number_of_node;
    for(int i=0;i<number_of_node;i++)
    {
        cin>>value_of_node;
        if(root==NULL)
            root = new Nd(value_of_node);
        else
        {
            insert_to_left_or_right(root,value_of_node);
        }
    }
   /* cout<<root->data<<endl;
    cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;*/
   cout<<"Preorder :\n";
    preorder(root);
    cout<<endl;
   cout<<"Inorder :\n";
    inorder(root);
}