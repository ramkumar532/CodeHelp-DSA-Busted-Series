/************************************************************

    Following is the linked list node structure.
    
    class Node 
    {
        public:
        int data;
        Node* next;

        Node(int data) 
        {
            this->data = data;
            this->next = NULL;
        }
    };
    
************************************************************/

Node * uniqueSortedList(Node * head) {
   	//empty List
    if(head == NULL)
        return NULL;
    
    //non empty list
    Node* curr = head;
    
    while(curr != NULL) {
        
        if( (curr -> next != NULL) && curr -> data == curr -> next -> data) {
            Node* next_next = curr ->next -> next;
            Node* nodeToDelete = curr -> next;
            delete(nodeToDelete);
            curr -> next = next_next;
        }
        else //not equal
        {
            curr = curr -> next;
        }   
    }
    
    return head; 
}



  // remove duplicates from an unsorted linked list here is well structured code for this problem 

class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
        if(head == NULL|| head->next == NULL){
            return head;
        }
        map<int , bool>duplicate;
        Node*prev = NULL;
        Node*curr = head;
        Node*neXt = curr->next;
        while(curr!=NULL){
            if(duplicate[curr->data]==true){
                prev->next = neXt;
                curr->next = NULL;
                curr = neXt;
                if(next!=NULL){
                neXt = neXt->next;
                }
            }
            duplicate[curr->data] = true;
            prev = curr;
            curr = neXt;
            if(neXt != NULL){
            neXt = neXt->next;
            }
            
        }
        return head;
    }
};
