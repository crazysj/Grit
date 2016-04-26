//Rearrange a linked list such that all even and odd positioned nodes are together
/* Node structure
struct node
{
    int data;
    struct node* next;
}; */

// Should rearrange given linked list such that all even
// positioned Nodes are before odd positioned.
// Returns new head of linked List.
Node *rearrangeEvenOdd(Node *head)
{
   // Your Code here
   if (head==NULL) // if empty
    return head;

   Node* odd = new Node();
   Node* even = new Node();
   Node* temp = new Node();

   odd=head;
   even=head->next;
   temp=even;

   while(1)
   {
       // no more node
       if(!odd || !even || even->next==NULL)
         {
             odd->next=temp;
             break;
         }

        // odd nodes
       odd->next=even->next;
       odd=even->next;

        //if no more even nodes
        if(odd->next==NULL)
        {
           even->next=NULL;
           odd->next=temp;
           break;
        }

        // even nodes
        even->next=odd->next;
        even=odd->next;

   }
   return head;
}
