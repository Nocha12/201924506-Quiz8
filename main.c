#include "node.h"
#include "allprint.h"
#include "register.h"
#include "personalprint.h"

int main(void)
{
    Node *node = NULL;
    
    while(1) {
        int num;
        
        printf("전화번호 관리\n\n");
        printf("1. 등록\t2. 전체검색\t3. 특정인검색\t4. 종료\t\n\n");
        printf("메뉴선택: ");
        
        scanf("%d", &num);
        
        if(num == 1)
            inputInfo(&node);
        if(num == 2)
            allPrint(node);
        if(num == 3)
            personalPrint(node);
        if(num == 4)
            break;
        
        printf("\n");
    }
    
    printf("프로그램을 종료합니다.\n");
    
    return 0;
}
