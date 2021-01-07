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

void SplitLinkList(Node *head,Node **head1,Node **head2){

  // head 1 and head2 storing pointer of pointer

  Node *fastptr,*slowptr;

  fastptr = head;
  slowptr = head;


  if(head==nullptr)
    return;


  while(fastptr->next->next != head
    && fastptr->next!=head)
  {

    fastptr = fastptr->next->next;
    slowptr = slowptr->next;

  }

  // check wheather it is even or not
  if(fastptr->next->next== head)
    fastptr = fastptr->next;

  *head1 = fastptr->next;

  if(head->next!=head)
    *head2 = slowptr->next;



  fastptr->next = slowptr->next;

  slowptr->next = head;



}
void PrintLinkedList(Node * head){

  Node * P = head->next;

  cout<<head->data<<" ";

  while(P!=head){
    cout<<P->data<<" ";
    P = P->next;
  }

  cout<<endl;

}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;  cin>>n;

    int *arr = new int[n];

    for(int i=0;i<n;i++)cin>>arr[i];




    Node* P = MakeLinkList(arr,n);



    Node *head1{nullptr};
    Node *head2{nullptr};

    SplitLinkList(P, &head1, &head2);

    PrintLinkedList(head1);
    PrintLinkedList(head2);






}
