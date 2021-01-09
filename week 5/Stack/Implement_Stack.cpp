#include<bits/stdc++.h>

using namespace std;

class Stack
{
public:
  int *arr;
  int size;
  int top;

  Stack(){top = -1;}
  Stack(int n);
  bool push(int data,int n);
  int pop();
  int peek();
  bool isEmpty();
  void print();


};
Stack::Stack(int n)
{
  arr = new int[n]{-1};
  size = n;
  top = -1;
}
bool Stack::push(int data,int n)
{
  if(top>=n-1)
  {
    return false;
  }
  else
  {
    cout<<data << " pushed\n";
    arr[++top] = data;
    return true;
  }
}
bool Stack:: isEmpty()
{
  return (top<0)?true:false;
}

int Stack::peek()
{
  if(top<0)
  {cout<<"stack is Empty\n";return 0;}
  else
    {int x = arr[top]; return x;}
}
int Stack::pop()
{
  if(top<0)
  {  cout<<"Stack underflow\n";
    return 0;
  }
  else
  {
    int x = arr[top];
    top--;
    return x;

  }
}

void Stack::print()
{
  for(size_t i=0;i<size;i++)
    cout<<arr[i]<<" ";
  cout<<endl;
}




int main()
{
  int n;  cin>>n;

  Stack myStack(n);
  myStack.push(20,n);
  myStack.push(50,n);
  cout<<myStack.pop()<<endl;
  myStack.push(30,n);
  myStack.push(568,n);

  myStack.print();
// return top value
  cout << myStack.peek()<<endl;




}
