#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data ;
    Node* next;

};
class linkedlist{
    Node *head;
    public:
    void add( int data ){
        Node *node = new Node();
        node->data = data;
        node->next = NULL;
        if (!head){
            head = node;

        }
        else{
            Node *n = head;
            while(n->next != NULL){
                n = n->next;
            }
            n->next = node; 
        }
    }
    void print(){
        Node *node = head;
        while(node->next!=NULL){
            cout << node->data << endl;
        }
        cout << node->data <<endl;
        
    }

};
int main(){
    cout << "I think i am here lets see if it is working " << endl;
    linkedlist *link =  new linkedlist();
    link->add(60);
    link->add(70);
    link->add(98);
    link->add(98);
    link->add(99);
    link->print();
}