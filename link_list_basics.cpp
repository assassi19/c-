#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

//defining the node 
class node{
   public:
   int data;
   node* next; //node is a pointer that's why make it node*

   node(int val){
      data=val;
      next=NULL;
   }
};

void insertAtHead(node* &head, int val){ //taking head by referrance & value to be inserted at head
   node* n = new node(val);//  new creates a node & value of the new node is set by this function
   n->next=head;     //makes the new node pointer to point towards the current head's address
   // cout<<cur_memory<<"head value"<<endl;;
   head=n;           //the new node is made head by doing head=n; 
}



// Given a node prev_node, insert a
// new node after the given prev_node
void insertAfter(node* prev_node, int new_data)
{
	// 1. Check if the given prev_node
	// is NULL
	if (prev_node == NULL)
	{
		cout << "the given previous node cannot be NULL";
		return;
	}
	
	// 2. Allocate new node
	node* new_node = new node(new_data);
	
	// 3. Put in the data
	new_node->data = new_data;
	
	// 4. Make next of new node as
	// next of prev_node
	new_node->next = prev_node->next;
	
	// 5. move the next of prev_node
	// as new_node
	prev_node->next = new_node;
}
// This code is contributed by anmolgautam818

void Insert_node_pos(node* &head,int a, int data){
      node* temp = head;
   for(int i=0; i!=a; i++){
      temp = temp->next;
   }
   insertAfter(temp,data);
}

void insertAtTail(node* &head, int val){
   node* n = new node(val); //creating a new node & entering the input data init!
   // incase nothing is added in linked list so far then for that case
   if(head==NULL){
      head=n;
      return ;
      }
   node* temp = head;   //creating a temporary node which is given head's referrance
   //traversing the link list so that we can access the elements from head to last node whose pointer is null👇👇
   while(temp->next != NULL){
      temp = temp->next;      //keeps making the temps value to the next
   }
   temp->next = n;
   //once temp reaches last element it'll exit while loop & temp will be pointed towards node 'n' & since n already has NULL in it's next pointer
   // so no need to point towards anything further
}

void display(node* head){ //head is taken by value here not by referrance
   node* temp = head;
      while (temp!=NULL){
         cout<<temp->data<<"-> ";
         temp = temp->next;
      }
      cout<<endl;
}

bool search(node* head, int key){
   node* temp = head; //temp pointer is pointed to the head remember this carefully
   while(temp != NULL){
      if(temp->data == key){
         return 1;
      }
      temp= temp->next;     //temp is given the address of the next node's data so it becomes that
   }
   return false;
}

int main(){
   node* head = NULL;
   insertAtTail(head, 1);
   insertAtTail(head, 2);
   insertAtTail(head, 3);
   insertAtHead(head, 4);
   insertAfter(head->next,7);    //remember to pass a pointer and a value in this type
   Insert_node_pos(head, 2, 18);
   display(head);
   cout<<endl;
   cout<<search(head,5)<<endl;
   cout<<search(head,2);
return 0;
}