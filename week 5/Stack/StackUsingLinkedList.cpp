#include<bits/stdc++.h>

using namespace std;

class Node
{
public:
  int data;
  Node *next;


};Node *top;


void push(int d)
{
  Node *temp = new Node;

  if(!temp){
    cout<<"stack is full\n"; exit(1);
  }

  temp->next = top;
  temp->data = d;
  top = temp;
}

int pop()
{
  int x = -1;
  if(top==nullptr)
  {  cout<<"stack underflow\n";exit(1);}
  else
{
  Node *P = top;
  top = top->next;
  free(P);

  return x;
}

}

bool isEmpty()
{
  if(!top)
    return true;
  return false;
}

bool isFull()
{
  Node *P = new Node;

  if(!P)
    return true;

  free(P);
  return false;
}

int peek(int n)
{
  Node *P = top;
  int c{0};
  while(c<n and P!=nullptr)
  {
    P = P->next;
    c++;
  }
  return P->data;
}

void display()
{
  Node *temp = new Node;

  if(!temp)
    cout<<"stack underflow\n";
  else
  {
    temp = top;
    while(temp)
    {
      cout<<temp->data<<" ";

      temp = temp->next;
    }
  }

}


int main()
{
  push(19);
  push(38);
  // push(32);
  pop();
  display();
}
