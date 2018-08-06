#include "Arduino.h"
#include "FrameScanner.h"

struct node
{
    long id;
    String brand;
    String colour;
    int quantity;
    node *nextNode;
};

void setup()
{
    node n1;
    n1.nextNode;
}

void loop()
{
}