#include "register.h"

Node* createNode(char* name, char* number){
    Node *temp;
    
    temp = malloc(sizeof(Node));
    temp->next = NULL;
    
    temp->name = malloc(strlen(name));
    strcpy(temp->name, name);
    
    temp->number = malloc(strlen(number));
    strcpy(temp->number, number);
    
    return temp;
}

void addNode(Node* node, char* name, char* number){
    while(node->next)
        node = node->next;
    
    node->next = createNode(name, number);
}

void inputInfo(Node** node) {
    char passwd[50];
    static int wrongCnt;
    
    if(wrongCnt > 0)
        printf("비밀번호(%d회실패): ", wrongCnt);
    else
        printf("비밀번호: ");
    
    scanf("%s", passwd);
    
    if(strcmp(passwd, "qwer1234") == 0) {
        wrongCnt = 0;
        
        char name[50];
        char number[50];
        
        printf("등록할 이름: ");
        scanf("%s", name);
        
        printf("전화번호: ");
        scanf("%s", number);
        
        if(*node == NULL)
            *node = createNode(name, number);
        else
            addNode(*node, name, number);
        
        printf("%s 정보 등록 완료!\n", name);
    }
    else if(wrongCnt < 2) {
        wrongCnt++;
        inputInfo(node);
    }
    else {
        printf("비밀번호(3회실패): 등록할 수 없음!\n\n프로그램을 종료합니다.\n");
        
        exit(0);
    }
}
