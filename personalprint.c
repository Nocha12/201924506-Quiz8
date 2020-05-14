#include "personalprint.h"

void personalPrint(Node* node) {
    char name[50];
    
    printf("검색할 이름: ");
    scanf("%s", name);
    printf("\n");
    
    while(node) {
        if(strcmp(node->name, name) == 0)
            printf("%s %s\n", node->name, node->number);
            
        node = node->next;
    }
}
