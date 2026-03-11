#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Node{

    public:
    Node* next;
    int data;


    Node(int v){
        data=v;
        next=NULL;
    }

    //we'll create nodes dynamically so to delete them, we have to explicitly delete them manualy

    
};

class LinkedList{
    Node* head;

    public:

    LinkedList(){
        head= NULL;
    }

    ~LinkedList(){// deleting Whole linked list dynamically using delete keyword
        Node* curr = head;
        while (curr != nullptr) {
            Node* temp = curr;
            curr = curr->next;
            delete temp;
        }
    }

    void push_front(int v){
        if (head==NULL){
            head= new Node(v);
        }
        else{// taking the head pointer from front to new node
            Node* temp = new Node(v);
            temp->next=head;
            head=temp;
            cout<<"first element: "<<head->data<<endl;
        }
    }


    void push_back(int v){
        if (head==NULL){
            head= new Node(v);
        }
        else{
            Node* temp= new Node(v); //finding the last element and linking it to new node;
            Node* curr=head;

            while(curr->next != NULL){
                curr=curr->next;
            }

            curr->next= temp;
        }
    }

    void printList(){ //iterative way
        Node* curr=head;
        if (head==NULL){
            cout<<"List is empty!!!";
        }

        else{
            while(curr!= NULL){
                 // here we used curr!= NULL bcz we wanted to traverse the whole linked list
                cout<<curr->data<<" -> ";
                curr = curr->next;
            }
        }
    }

    void insert_behind(int val, int pos){
        //first find the node with that value
        // second insert that value

        Node* temp = head;

        while(temp!=NULL){
            if(temp->data==pos){
                Node* newnode= new Node(val);
                newnode->next=temp->next;
                temp->next=newnode;
                return;
            }

            temp=temp->next;
            
        }
        cout<<"Node not found";
    

    }


    void pop_front(){
        Node* temp= head;
        head = head->next;
        cout<< temp->data<<endl;
        delete head;
    }

    void pop_back(){ 

        // we're implimenting this without tail implementation
        // with tail the last node logic will be while(curr->next != tail)
    
        Node* curr= head;
        while(curr->next->next!=NULL){ // finding the last second node
            curr=curr->next;
        }

        Node* temp = curr->next; // storimg the last node
        curr -> next=NULL; // deleting the pointer of last node
        cout<<temp->data<<endl;
        delete temp; // deleting the last node

        
    }

    int ll_search(int v, Node* h, int index){// can not call this function out side the class
        if(h==NULL){
            return -1;
        }

        if(h->data==v){
            return index;
        }
        
        return ll_search(v,h->next,index+1);
    }

    void ll_reverse(){
        Node *prev =nullptr, *curr=head;
        Node *next;

        while(curr!=nullptr){

            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            
        }

    }



};



int main() {
    LinkedList list;

    cout << "Initial list:\n";
    list.printList();   // should say empty

    cout << "\nPushing front: 3, 2, 1\n";
    list.push_front(3);
    list.push_front(2);
    list.push_front(1);
    list.printList();   // 1 -> 2 -> 3 -> NULL

    cout << "\nPushing back: 4, 5\n";
    list.push_back(4);
    list.push_back(5);
    list.printList();   // 1 -> 2 -> 3 -> 4 -> 5 -> NULL

    cout << "\nInsert 99 behind 3\n";
    list.insert_behind(99, 3);
    list.printList();   // 1 -> 2 -> 3 -> 99 -> 4 -> 5 -> NULL

    cout << "\nInsert 77 behind 1 (head case)\n";
    list.insert_behind(77, 1);
    list.printList();   // 1 -> 77 -> 2 -> 3 -> 99 -> 4 -> 5 -> NULL

    cout << "\nInsert behind non-existent value (42)\n";
    list.insert_behind(100, 42); // should print "Node not found"

    cout << "\nEnd of main — destructor should now delete entire list cleanly\n";
    return 0;
}
