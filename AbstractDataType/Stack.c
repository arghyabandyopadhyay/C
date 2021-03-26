typedef struct node 
{ 
 void *DataPtr; 
 struct node *link; 
} StackNode; 
typedef struct
{ 
 int count; 
 StackNode *top; 
} STACK; 