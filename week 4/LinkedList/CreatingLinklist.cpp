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



int main()
{
  int n;  cin>>n;

  int *arr = new int[n];

  for(int i=0;i<n;i++)cin>>arr[i];

  Node *P = nullptr;

  P = MakeLinkList(arr,n);

  while(P){
    cout<<P->data<<" ";

  P = P->next;
  }

}
