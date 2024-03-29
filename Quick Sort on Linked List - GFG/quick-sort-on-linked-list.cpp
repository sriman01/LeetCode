//{ Driver Code Starts
#include <iostream>
#include <cstdio>
using namespace std;
 
/* a node of the singly linked list */
struct node
{
    int data;
    struct node *next;
    
    node(int x){
        data = x;
        next = NULL;
    }
};

/* A utility function to insert a node at the beginning of linked list */
void push(struct node** head_ref, int new_data)
{
    /* allocate node */
    struct node* new_node = new node(new_data);
 
    /* link the old list off the new node */
    new_node->next = (*head_ref);
 
    /* move the head to point to the new node */
    (*head_ref)    = new_node;
}
 
/* A utility function to print linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}
void quickSort(struct node **headRef);
int main()
{
	int t,n,x;
	cin>>t;
	while(t--){
		
        
        cin>>n;n=n-1;
		cin>>x;
        node *temp,*head = new node(x);
        temp=head;
        while(n--)
        {
			cin>>x;
          temp->next=new node(x);
          temp=temp->next;
			}
    
    quickSort(&head);
 
    printList(head);
 while(head!= NULL){
     temp=head;
     head=head->next;
     free(temp);
     
 }
	}
    return 0;
}
// } Driver Code Ends


 
/* a node of the singly linked list 
struct node
{
    int data;
    struct node *next;
    
    node(int x){
        data = x;
        next = NULL;
    }
}; */

//you have to complete this function

struct node* last_node(node* head){
    while(head != NULL && head->next != NULL)
       head = head->next;

    return head;
}

struct node* findPivot(node* first, node* last){
    struct node* pivot = first;
    struct node* front = first;

    int temp = 0;

    while(front != NULL && front != last){
        if(front -> data < last->data){
           pivot = first;

           temp = first->data;
           first->data = front->data;
           front->data = temp;

           first = first->next;
        }

        front = front->next;
        
    }

    temp = first->data;
    first->data = last->data;
    last->data = temp;

    return pivot;



}
void qquickSort(struct node* first,struct node* last){
    if(first == last) return;

    struct node* pivot = findPivot(first, last);

    if(pivot != NULL && pivot->next != NULL)
      qquickSort(pivot->next, last);

    if(pivot != NULL && pivot->next != NULL)
      qquickSort(first, pivot);
}
void quickSort(struct node **headRef) {
    qquickSort(*headRef, last_node(*headRef));
}