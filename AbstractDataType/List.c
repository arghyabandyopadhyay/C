typedef struct node 
{ 
 void *DataPtr; 
 struct node *link; 
} Node; 
typedef struct
{ 
 int count; 
 Node *pos; 
 Node *head; 
 Node *rear; 
 int (*compare) (void *argument1, void *argument2) 
} LIST;  