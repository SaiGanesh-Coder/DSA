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

Node* mergeTwoLists(Node* list1, Node* list2) {
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        Node *finalHead = NULL;        // head of the list to return

        if(list1->data < list2->data){
            finalHead = list1;
            list1 = list1->next;
        }else{
            finalHead = list2;
            list2 = list2->next;
        }
        Node *p = finalHead;      // pointer to form new list

        while(list1 && list2){
            if(list1->data < list2->data){
                p->next = list1;         // inserting at tail
                list1 = list1->next;
            }else{
                p->next = list2;
                list2 = list2->next;
            }
            p = p->next;
        }
        if(list1){
            p->next = list1;
        }else{
            p->next = list2;
        }
        return finalHead;
    }

    Node *mergeTwoListsRecursively(Node *list1,Node *list2){
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;

        Node *newHead = NULL;

        if(list1->data < list2->data){
            newHead = list1;
            newHead->next = mergeTwoListsRecursively(list1->next,list2);
        }else{
            newHead = list2;
            newHead->next = mergeTwoListsRecursively(list1,list2->next);
        }
        return newHead;  
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
    Node *head2 = takeInput();
    head = mergeTwoLists(head,head2);
    print(head);
    return 0;
}