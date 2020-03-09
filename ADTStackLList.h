#ifndef ADTSTACKLLIST_H
#define ADTSTACKLLIST_H
#include <iostream>
using namespace std;
// to implement a stack using linked list
template <class T>
class node
{
  public:
    T data;
    node<T>*next;
};

template <class T>
class stack
{
  private:
    T item;
    node<T>* top;
  public:
    stack(); // constructor
    void push(); //to insert an item to the stack
    void pop(); // to remove an item from the stack
    void display(); //to display the stack elements on screen
};

template <class T> stack<T>::stack(){
  top = NULL;
}

template <class T> void stack<T>::push(){
  T p;
  cout << "Enter an item to be pushed: ";
  cin >> p;
  
  node<T>* temp;
  temp = new node<T>;
  temp->data = p;
  temp->next = top;
  top = temp;
  
  cout << "\nPushed Successfully" << endl;
}

template <class T> void stack<T>::pop(){
  if(top != NULL)
  {
  node<T>* temp;
  temp = top;
  cout << "\n" << top->data << " is popped Successfully" << endl;
  top = top->next;
  delete temp;
  }
  else
    cout<< "\nStack is empty"<< endl;
}

template <class T> void stack<T>::display(){
  node<T>* temp;
  temp = top;
  cout << "\nElements in the Stack are" << endl;
  while(temp != NULL)
  {
    cout << "\n|" <<temp->data << "|" << endl;
    temp = temp->next;
  }
  
}

#endif