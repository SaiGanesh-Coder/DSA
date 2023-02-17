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
    Node *head=NULL;     //LL is empty
    Node *tail=NULL;     //LL is empty
    while(data != -1){
        //creating LL
        Node *n = new Node(data);
        //1st Node
        if(head == NULL){
            head=n;
            tail=n;
        }else{
            tail->next=n;     //Inserting at tail
            tail=tail->next;
        }
        cin>>data;
    }
    return head;
}

Node *takeInput2(){
    int data;
    cin>>data;
    Node *head=NULL;     //LL is empty
    Node *tail=NULL;     //LL is empty
    while(data != -1){
        //creating LL
        Node *n = new Node(data);
        //1st Node
        if(head == NULL){
            head=n;
            tail=n;
        }else{
            n->next=head;   //Inserting at head
            head=n;
        }
        cin>>data;
    }
    return head;
}


int length(Node *head){
    int count=0;
    Node *temp = head;
    while(temp != NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

void printithNode(Node *head,int i){
    Node *temp = head;
    //int n = length(head);
    if(i<0){
        cout<<"-1"<<endl;
        return;
    }
    int count=0;
    while(count != i && temp != NULL){
        temp=temp->next;
        count++;
    }
    if(temp) cout<<"data at "<<"Index "<<i<<" : "<<temp->data;
    else cout<<-1;
}

Node* insertAtithPosition(Node *head,int data,int i){
        Node* temp = head;
        if(i<0){
            return head;
        }
        if(i==0){
            Node* n = new Node(data);
            n->next=head;
            head=n;
            return head;
        }
        int count=1;
        while(count < i && temp!=NULL){
            temp=temp->next;
            count++;
        }
        if(temp){
            /*Node* n = new Node(data);     //Method 1
            n->next=temp->next;
            temp->next=n;*/

            Node* n = new Node(data);         //Method 2
            Node* tempStore = temp->next;
            temp->next=n;
            n->next=tempStore;
            return head;
        }
        return head;
}

Node *deleteithNode(Node* head,int i){            //Memory leak is present which means the node is present with unknown address
    if(i<0){
        return head;
    }
    if(i==0 && head){
        //return head->next;
        Node *newHead = head->next;
        head->next=NULL;
        delete head;                              //remove memory leak              
        return newHead;
    }
    Node* curr = head;
    int count=1;
    while(count<=i-1 && curr!=NULL){
        curr = curr->next;
        count++;
    }
    if(curr && curr->next){   
    //curr->next = curr->next->next;              //memory leak
    Node* temp = curr->next;
    curr->next = curr->next->next;
    temp->next=NULL;
    delete temp;                                   // remove memory leak
    return head;
    }
    return head;
}

void print(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL\n";
}

int main(){
    Node *head = takeInput();   //Inserting at head
    //cout<<"Length is : "<<length(head)<<endl;
    //Node *head2 = takeInput2();  //Inserting at tail
    //cout<<"Length is : "<<length(head2)<<endl;
    //print(head2);
    //int i;
    //cout<<"Enter the ith number : ";
    //cin>>i;
    //printithNode(head,i);
    int data=0,i=0;
    //cout<<"Enter data and index : ";
    //cin>>data>>i;
    //head = insertAtithPosition(head,data,i);
    cin>>i;
    head = deleteithNode(head,i);
    print(head);
    return 0;
}