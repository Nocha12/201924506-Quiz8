#include "allprint.h"

void allPrint(Node* node) {
    printf("<<전화번호목록>>\n");
    
    while(node) {
        printf("%s %s\n", node->name, node->number);
        node = node->next;
    }
}
