const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

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
  last->next = head;

  return head;
}

void PrintLinkedList(Node * head){

  Node * P = head->next;

  cout<<head->data<<" ";

  while(P!=head){
    cout<<P->data<<" ";
    P = P->next;
  }

}
//
Node * SortedInsert(Node * head,int x)
{
  Node *current = head;
  Node *temp = new Node;
  temp->data = x;
  temp->next = nullptr;


  if(head == nullptr)
  {
    temp ->next = temp;
    head = temp;
  }
  else if(current->data>x){

    while(current->next!=head)
      current = current->next;

    current->next = temp;
    temp ->next = head;
    head = temp;

  }
  else
  {
    while(current->next !=head && current->next->data < x)
      current = current->next;


    temp->next = current->next;
    current->next = temp;


  }

  return head;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;  cin>>n;

    int *arr = new int[n];

    for(int i=0;i<n;i++)cin>>arr[i];

    int data; cin>>data;


    Node* P = MakeLinkList(arr,n);

    SortedInsert(P,data);

    PrintLinkedList(P);




}
