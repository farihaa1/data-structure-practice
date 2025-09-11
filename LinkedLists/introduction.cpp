#include <iostream>
using namespace std;

// functions -> 1) push-front, pop-front, 2)push-back, pop-back

class node{
public:
    int data;
    node *next;

    node(int val){
        data = val;
        next = NULL;
    }
};
class list{

    node *head;
    node *tail;

public:
    list(){
        head = tail = NULL;
    }
    void push_front(int val){
        node* newNode = new node(val); //dynamic object
        // node newNode(val); static

        if(head==NULL){
            head = tail= newNode;
            return;
        }
    }
};

int main(){
    list ll;





    return 0;
}
