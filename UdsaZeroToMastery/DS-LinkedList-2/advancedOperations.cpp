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

int length(Node *head){
    if(head==NULL) return 0;
    return 1+length(head->next);
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

Node *midNode(Node *head){
    Node *slowPointer = head;
    Node *fastPointer = head->next;
    while(fastPointer && fastPointer->next){
        slowPointer = slowPointer->next;
        fastPointer = fastPointer->next->next;
    }
        if(fastPointer) return slowPointer->next;             //even length
        return slowPointer;                         //odd length
}

Node *reverseLL(Node *head){
    Node* curr = head;
    Node* prev = NULL;
    while(curr){
    Node* n = curr->next;
         curr->next=prev;
         prev=curr;
         curr=n;
    }   
    return prev;
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

    Node *sortList(Node *head){
        if(head==NULL || head->next==NULL) return head;

        Node *slow = head;
        Node *fast = head->next;

        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }

        Node *n = slow->next;
        slow->next=NULL;

        Node *a = sortList(head);
        Node *b = sortList(n);

        head=mergeTwoLists(a,b);
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
    //Node *head2 = takeInput();
    //int key;
    //cin>>key;
    //Node *mid = midNode(head);
    //cout<<mid->data<<endl;
    head = removeNthFromEnd(head,4);
    //head = mergeTwoLists(head,head2);
    //head = sortList(head);
    print(head);
    return 0;
}