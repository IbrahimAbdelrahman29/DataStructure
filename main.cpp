#include <iostream>
using namespace std;
const int s=5;
class Array{
private:
    int Size;
    int length;
    int *ar;
public:
    Array(int s){
        Size=s;
        length=0;
        ar=new int[Size];
    }
    bool isFull(){
        if(length>=Size){
            return true;
        }
        else{
            return false;
        }
    }
    bool isEmpty(){
        if(length==0){
            return true;
        }
        else{
            return false;
        }
    }
    int getsize(){
        return Size;
    }
    void insertion(int n){
        if(isFull()){
            cout<<"sorry array is full"<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                cout<<"enter number "<<(i+1)<<endl;
                cin>>ar[i];
                length++;
            }
        }
    }
    void deletion(int value){
        int index;
        if(ar[length-1]==value){
            ar[length-1]=0;
            length--;
        }
        else{
        for(int i=0;i<length;i++){
            if(ar[i]==value){
                ar[i]=0;
                index=i;
            }
        }
        length--;
        for(int i=index;i<length;i++){
            ar[i]=ar[i+1];
        }
      }
    }
    void Sort(){
        for(int i=0;i<length;i++){
            for(int j=i+1;j<length;j++){
                if(ar[i]>ar[j]){
                    swap(ar[i],ar[j]);
                }
            }
        }
    }
    void enlarge(int newsize){
        Size+=newsize;
        int *ar2=new int[Size];
        for(int i=0;i<length;i++){
            ar2[i]=ar[i];
        }
        ar=ar2;
    }
    void display(){
        if(isEmpty()){
            cout<<"this array is empty"<<endl;
        }
        else{
        cout<<"Array: "<<endl;
        for(int i=0;i<length;i++){
            cout<<ar[i]<<endl;
        }
      }
    }
};
class Stack{
private:
    int top;
    int Size;
    int *ar;
public:
    Stack(int s){
        top=-1;
        Size=s;
        ar=new int[Size];
    }
    bool isEmpty(){
        if(top==-1)
            return true;
        else
            return false;
    }
    bool isFull(){
        if(top>=Size-1)
            return true;
        else
            return false;
    }
    void push(int value){
        if(isFull()){
            cout<<"Sorry the stack is full"<<endl;
        }
        else{
        top++;
        ar[top]=value;
        cout<<"the value is pushed"<<endl;
        }
    }
    void pop(){
        if(isEmpty()){
            cout<<"the stack is already empty"<<endl;
        }
        else{
        ar[top]=0;
        top--;
        }
    }
    void display(){
        if(isEmpty()){
            cout<<"The stack is already empty"<<endl;
        }
        else{
            for(int i=top;i>=0;i--){
                cout<<ar[i]<<endl;
            }
        }
    }
};
class node_d{
public:
    int data;
    node_d* next;
    node_d* previous;
    node_d(){
    data=0;
    next=NULL;
    previous=NULL;
    }
};
class node_C{
public:
    int data;
    node_C* next;
    node_C(){
        data=0;
        next=NULL;
    }
};
class Linked_List_d{
public:
    node_d* head;
    Linked_List_d(){
        head=NULL;
    }
    bool isEmpty(){
        if(head==NULL){
            return true;
        }
        else{
            return false;
        }
    }
    void insertion(int value){
        node_d* newnode=new node_d();
        newnode->data=value;
        if(isEmpty()){
            newnode->next=NULL;
            head=newnode;
        }
        else{
            newnode->next=head;
            head=newnode;
        }
    }
    void deletion(int value){
        node_d* prev=head;
        node_d* temp=head;
        if(temp->data==value){
            head=temp->next;
        }
        while(temp->data!=value){
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
    }
    void display(){
        if(isEmpty()){
            cout<<"the linked list not have any nodes"<<endl;
        }
        else{

        node_d* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
      }
    }
};
class Linked_List_C{
public:
    node_C* head;
    Linked_List_C(){
        head=NULL;
    }
    bool isEmpty(){
        if(head==NULL){
            return true;
        }
        else{
            return false;
        }
    }
    void insertion(int value){
        node_C* newnode=new node_C();
        newnode->data=value;
        if(isEmpty()){
            newnode->next=head;
            head=newnode;
        }
        else{
            newnode->next=head;
            head=newnode;
        }
    }
    void deletion(int value){
        node_C* temp=head;
        node_C*prev=head;
        if(temp->data==value){
            head=temp->next;
        }
        else{
            while(temp->data!=value){
                prev=temp;
                temp=temp->next;
            }
            prev->next=temp->next;
        }
    }
    void display(){
        if(isEmpty()){
            cout<<"the linked list is empty"<<endl;
        }
        else{
            node_C* temp=head;
            while(temp!=NULL){
                cout<<temp->data<<endl;
                temp=temp->next;
                if(temp==head){
                    temp=NULL;
                }
            }
        }
    }
};
class Linked_List_C_d{
public:
    node_d* head;
    Linked_List_C_d(){
        head=NULL;
    }
    bool isEmpty(){
        if(head==NULL){
            return true;
        }
        else{
            return false;
        }
    }
    void insertion(int value){
        node_d* newnode=new node_d();
        newnode->data=value;
        if(isEmpty()){
            newnode->next=head;
            head=newnode;
        }
        else{
            newnode->next=head;
            head=newnode;
        }
    }
    void deletion(int value){
        node_d* prev=head;
        node_d* temp=head;
        if(temp->data==value){
            head=temp->next;
        }
        else{
        while(temp->data!=value){
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        }
    }
    void display(){
        if(isEmpty()){
            cout<<"the linked list is already empty"<<endl;
        }
        else{
            node_d* temp=head;
            while(temp!=NULL){
                cout<<temp->data<<endl;
                temp=temp->next;
                if(temp==head){
                    temp=NULL;
                }
            }
        }
    }
};
class C_queue{
  public:
       int q[s];
       int front=-1;
       int rear=-1;
     bool isEmpty(){
         if(front==-1 && rear==-1) return true;
         else return false;
     }
     bool isFull(){
         if((rear+1)% s ==front) return true;
         else return false;
     }
    void enQueue(int val){
     if(isFull()){
         cout<<"Queue is Full"<<endl;
         return;
     }
     else if(isEmpty()){
         rear=front=0;
     }
     else{
         rear=(rear+1)%s;
     }
      q[rear]=val;
      cout<<"Value is inserted"<<endl;
    }
    void deQueue(){
        if(isEmpty()){
            cout<<"Queue is Empty"<<endl;
        }
        else if (front==rear){
            rear=-1;
            front=-1;
        }
        else{
            front= (front+1)%s;
        }
    }
    void display(){
    cout<<"Queue :"<<endl;
     for(int i=front;i<=rear;i++){
         cout<<q[i]<<endl;
     }
    }
};
class D_E_queue{
  public:
       int q[s];
       int front=-1;
       int rear=-1;
  public:
     bool isEmpty(){
         if(front==-1 && rear==-1) return true;
         else return false;
     }
     bool isrearFull(){
         if(rear+1==s) return true;
         else return false;

     }
     bool isfrontFull(){
         if(front==0) return true;
         else return false;

     }
    void addrear(int val){
     if(isrearFull()){
         cout<<"Queue is Full"<<endl;
         return;
     }
     else if(isEmpty()){
        front=0;
         rear=0;
     }
     else{
         rear++;
     }
      q[rear]=val;
      cout<<"Value is inserted"<<endl;
    }
    void delrear(){
        if(isEmpty()){
            cout<<"Queue is isEmpty"<<endl;
            return;
        }
        else if(rear==front){
            front=-1;
            rear=-1;
            return;
        }
        else{
            rear--;
        }
    }

    void addfront(int val){
        if(isfrontFull()){
            cout<<"Queue is Full"<<endl;
             return;
        }
        else if(isEmpty()){
            rear=0;
            front=0;
        }
        else{
            front--;
        }
        q[front]=val;
     cout<<"Value is inserted"<<endl;
    }
    void delfront(){
        if(isEmpty()){
            cout<<"Queue is isEmpty"<<endl;
            return;
        }
        else if(front==rear){
            front=-1;
            rear=-1;
            return;
        }
        else{
            front++;
        }
    }

    void display(){
    cout<<"Queue :"<<endl;
     for(int i=front;i<=rear;i++){
         cout<<q[i]<<endl;
     }
    }
};
int main()
{

}
