#include <iostream>
#include "List.h"

using namespace std;

List::List(){
  head = NULL;
  curr = NULL;
  temp = NULL;
}

List::~List(){
  delete head;
  delete curr;
  delete temp;
  head = NULL;
  curr = NULL;
  temp = NULL;
}

void List::AddNode(int addData){
   nodePtr n = new node;
   n->next = NULL;
   n->data = addData;

   if(head != NULL){
     curr = head;
     while(curr->next != NULL){
       curr = curr->next;
     }
     curr->next = n;
   }
   else{
     head = n;
   }
}

void List::DeleteNode(int delData){
  nodePtr delPtr = NULL;
  temp = head;
  curr = head;
  while(curr != NULL && curr->data != delData){
    temp = curr;
    curr = curr->next;
  }
  if(curr == NULL){
    cout << delData << " was not in the list\n";
    delete delPtr;
  }
  else{
    delPtr = curr;
    curr = curr->next;
    temp->next = curr;
    if(delPtr == head){
      head = head->next;
      temp = NULL;
    }
    delete delPtr;
    cout << "The value " << delData << " was deleted\n";
  }
}

void List::PrintList(){
  temp = head;
  if(temp == NULL){
    cout << "Empty list\n";
    return;
  }
  while(temp != NULL){
    cout << temp->data << endl;
    temp = temp->next;
  }
}

void List::getFirst(){
  if(head != NULL)
    cout << "First: " << head->data << endl;
}
