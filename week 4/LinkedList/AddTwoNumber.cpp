#include<bits/stdc++.h>

using namespace std;

class Node
{
public:
  int data;
  Node *next;
};

Node* MakeLinkList(int *arr,int n){

  Node *head = new Node;
  head->data = arr[0];
  head->next = nullptr;
  auto last = head;


  for(int i=1;i<n;i++){

    Node *temp = new Node;
    temp->data = arr[i];
    temp->next = nullptr;
    last->next = temp;
    last = temp;

  }
  return head;
}

Node *AddTwoNumbers(Node *first,Node *second)
{
  int firstNum = 0;
  int secondNum = 0;
  while(first){
    firstNum = firstNum*10 + first->data;

    first = first->next;
  }

  while(second)
  {
    secondNum = secondNum*10 + second->data;

    second = second->next;
  }

  int finalSum = firstNum + secondNum;
  int rem = 0;
  Node *head;
  head = nullptr;
  while(finalSum>9){

    rem = finalSum%10;
    finalSum = finalSum/10;

    Node *temp = new Node;
    temp->data = rem;
    temp->next = head;
    head = temp;



  }


  Node *temp = new Node;
  temp->data = finalSum;
  temp->next = head;
  head = temp;


  return head;


}


int main()
{
  int n;  cin>>n;

  int *arr = new int[n];

  for(int i=0;i<n;i++)cin>>arr[i];

  int m;  cin>>m;

  int *brr = new int[m];

  for(int i=0;i<m;i++)cin>>brr[i];

  auto *P = MakeLinkList(arr,n);

  auto *Q = MakeLinkList(brr,m);


  auto head = AddTwoNumbers(P,Q);
  // not correct answer yet
  while(head){
    cout<<head->data<<" ";
  head = head->next;
  }


}
