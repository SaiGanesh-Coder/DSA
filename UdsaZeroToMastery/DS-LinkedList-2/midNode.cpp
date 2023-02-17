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

Node *midNode(Node *head){
    Node *slowPointer = head;
    Node *fastPointer = head->next;
    while(fastPointer && fastPointer->next){
        slowPointer = slowPointer->next;
        fastPointer = fastPointer->next->next;
    }
        if(fastPointer) return slowPointer->next;             //even length ""mid+1""
        return slowPointer;                         //odd length
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
    Node *mid = midNode(head);
    cout<<mid->data;         // 1 2 3 4 5 -> 3    // 1 2 3 4 -> 3
    return 0;
}