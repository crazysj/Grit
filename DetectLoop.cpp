/*

The structure of linked list is the following

struct node
{
int data;
node* next;
};

*/
int detectloop(struct node *list){
// your code goes here
node* slow= new node();
node* fast= new node();
slow = list;
fast=list;
while(slow-> next != NULL && fast->next != NULL && fast->next->next !=NULL){
     slow=slow->next;
     fast=fast->next->next;
     if(slow==fast)
        return 1;
}
return 0;
}
