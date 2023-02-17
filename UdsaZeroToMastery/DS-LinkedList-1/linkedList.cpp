#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;         //Node is here because the pointer is containing the address of the next node
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

int main(){
    //Static Objects
    Node n1(1);
    Node n2(2);
    
    n1.next = &n2;
    cout<<n1.data<<" "<<n2.data<<endl;

    Node *head = &n1;
    cout<<head->data<<endl;   // same as (*head).data

    //Dynamic Objects
    Node *n3 = new Node(3);
    Node *n4 = new Node(4);
    n3->next = n4;
    return 0;
}