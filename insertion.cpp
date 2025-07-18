#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

class createNode{
    public:
    Node *start=NULL;

    void insertAtFirst(int data){
         Node *temp = new Node(data);

         if(start == NULL){
             start = temp;
         }
         else{
             temp->next = start;
             start = temp;
         }

    }

    void insertAtEnd(int data){

         Node *n = new Node(data);
          if(start == NULL){
              start = n;
          }
          else{
              Node *temp = start;
              while(temp->next){
                  temp = temp->next;
              }
              temp->next = n;
          }
    }

    void insertAtSpecific(int pos , int data){
        Node *n = new Node(data);
        if(start == NULL){
            start = n;
        }
        else{
        Node *temp=start;
        int count=0;

        while(temp){
            count++;
            temp = temp->next;
        }

        if(pos>count){
            cout<<"Invalid Range: ";
            return;
        }
        if(pos == 0){
           insertAtFirst(data);
           return;
        }
        if(pos == count){
            insertAtEnd(data);
            return;
        }

        Node *t1=NULL;
        temp = start;
        pos--;
        while(pos--){
         t1 = temp;
         temp = temp->next;
        }
        n->next = temp;
        t1->next = n;
    }
}

     void insertAtMiddle(int data){
          Node *slow =start, *fast=start,*k;
          Node *n  = new Node(data);
          if(start == NULL){
              start = n;
              return;
          }
          if(start->next == NULL){
                 n->next = start;
                 start = n;
               return;
          }
          while(fast != NULL && fast->next != NULL){
              k = slow;
              slow = slow->next;
              fast = fast->next->next;
          }
         k->next = n;
         n->next = slow;
     }
    void display(){
        if(start == NULL){
            cout<<"Can't Display list is empty: ";
            return;
        }
        else{
            Node *temp = start;
            while(temp){
                cout<<" "<<temp->data;
                temp = temp->next;
            }
        }
    }
};
int main(){
     createNode t1;
     t1.insertAtFirst(10);
       t1.insertAtFirst(20);
        t1.insertAtFirst(30);
         t1.insertAtFirst(40);
         t1.insertAtEnd(80);
         t1.insertAtSpecific(0,455);
        t1.insertAtSpecific(3,8985);
        t1.insertAtSpecific(7,7896);
        t1.insertAtMiddle(90);
        t1.insertAtMiddle(14567);
          t1.display();
}



