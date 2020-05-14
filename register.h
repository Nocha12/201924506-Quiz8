#ifndef register_h
#define register_h

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

Node* createNode(char* name, char* number);

void addNode(Node* node, char* name, char* number);

void inputInfo(Node** node);

#endif /* register_h */
