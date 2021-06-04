typedef struct node 
{ 
 void *DataPtr; 
 struct node *next; 
} QueueNode; 
typedef struct 
{ 
 QueueNode *front; 
 QueueNode *rear; 
 int count; 
} QUEUE;