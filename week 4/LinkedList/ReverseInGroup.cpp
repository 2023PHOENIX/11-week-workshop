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


Node *reverse(Node *head,int n)
{
  Node *current{head};
  Node *next{nullptr},*prev{nullptr};

  int c{0};

  while(current!=NULL and c<n)
  {
    next = current->next;
    current->next = prev;

    prev = current;
    current = next;
    c++;

  }

  if(next!=NULL)
  {
    head->next = reverse(next,n);
  }

  return prev;
}


int main()
{
  int n;  cin>>n;

  int *arr = new int[n];

  for(int i=0;i<n;i++)cin>>arr[i];

  Node *head = nullptr;

  head = MakeLinkList(arr,n);

  // while(head){
  //   cout<<head->data;
  //
  //   head = head->next;
  // }


  int N;  cin>>N;
  auto headR = reverse(head,N);

  while(headR)
  {
    cout<<headR->data<<" ";

  headR = headR->next;
  }

}
