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

bool isPresent(Node *head , int key){
    Node *curr = head;
    while(curr!=NULL){
        if(curr->data==key) return true;
        else curr=curr->next;
    }
    return false;
}

bool isPresentRecursively(Node *head,int key){
    if(head==NULL) return false;
    if(head->data==key) return true;
    return isPresentRecursively(head->next,key);
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
    if(isPresentRecursively){
        cout<<"Present";
    }else{
        cout<<"Not Present";
    }
    return 0;
}