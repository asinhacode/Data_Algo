struct node
{
    
    int data;
    struct node *next;
};

struct node *head, *newNode; // head stores the address of type node

newNode = (struct node *) malloc(sizeof(struct node))); // memory allocation
// 8 bytes have been allocated
// returns the pointer of the starting address of the memory block


