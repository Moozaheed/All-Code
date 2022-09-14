#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
using vi = vector <int>;
using vll = vector <ll>;
#define pb push_back;
#define fo(i,a,b) for(ll i=(a);i<(b);i++)


class node{
public:
    int data;
    node *next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void insertnode(node* &head,int val){

    node *n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node *temp=head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void display (node *head){
    node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


int main()
{
    node *head=NULL;
    insertnode(head,1234);
    insertnode(head,335);
    insertnode(head,33);
    insertnode(head,4);
    insertnode(head,5);

    display(head);    
    
    return 0;
}