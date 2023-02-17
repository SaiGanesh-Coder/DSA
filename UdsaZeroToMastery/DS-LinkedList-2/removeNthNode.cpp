#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

Node *takeInput(){
    int data;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL;
    while(data!=-1){
        Node *n = new Node(data);
        if(head==NULL){
            head=n;
            tail=n;
        }else{
            tail->next=n;
            tail=tail->next;
        }
        cin>>data;
    }
    return head;
}

Node *removeNthFromEnd(Node *head,int k){
    Node *one = head;
    Node *two = head;

    while(k--){              // k times
        two=two->next;
    }
    if(two==NULL){
        return one->next;           // length of LL is = K   => Delete the head node 
    }
    while(two->next!=NULL){
        one=one->next;
        two=two->next;
    }
    Node *temp = one->next;
    one->next=one->next->next; 
    temp->next=NULL;
    delete temp;
    return head;
}

void print(Node *head){
    Node *temp = head;
    while(temp){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}

int main(){
    Node *head = takeInput();
    head = removeNthFromEnd(head,4);
    print(head);
    return 0;
}