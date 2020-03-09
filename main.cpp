#include "ADTStackLList.h"
#include <iostream>
#include <string>
using namespace std;

void menu();

int main() {
  string tempS;
  char selection;
  stack<int> newStack;
  do{
  menu();
  getline(cin, tempS);
  selection = tempS[0];
  
  if(selection == '1' && tempS.size() < 2)
  {
    newStack.push();
    cin.ignore();
  }
  else if(selection == '2'&& tempS.size() < 2)
  {
    newStack.pop();
  }
  else if(selection == '3' && tempS.size() < 2)
  {
    newStack.display();
  }
  else if(selection != '4')
  {
    cout << "Selection invalid. Please select again." << endl;
  }
  }while(selection != '4');
  return 0;
}

void menu(){
  cout << "\n*** Menu for Stack operations ***" << endl;
  cout <<"\n1.PUSH (insert)" << endl;
  cout <<"2.POP (remove)" << endl;
  cout <<"3.DISPLAY" << endl;
  cout <<"4.EXIT" << endl;
  cout <<"Enter Choice:";
}





