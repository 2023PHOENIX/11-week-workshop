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
Node* MakeLinkListWithoutLoops(int *arr,int n){

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
  // last->next = head;

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
bool detectCycle(Node *head)
{
  Node *P,*Q;

    P = head;
    Q = head;
    if(head == nullptr)
        return 0;
    while(P and Q and P->next)
    {
        Q = Q->next;
        P = P->next->next;

        if(P==Q)
            return 1;


    }
    return 0;


}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;  cin>>n;

    int *arr = new int[n];

    for(int i=0;i<n;i++)cin>>arr[i];




    Node* P = MakeLinkList(arr,n);

    cout<<detectCycle(P);




}
