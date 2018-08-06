#include "Arduino.h"

typedef struct node{
    int ID;
    String brand;
    int quantity;
    struct node* next;    
};

node* head;


