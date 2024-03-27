 #include <stdio.h>
 #include <stdlib.h>

 void main()
 {
    int list[5]; // 크기가 5인 list 배열을 생성
    int *plist[5]; // 크기가 5인 plist 포인터 배열을 생성
    list[0] = 10; // list 배열의 첫 번째 
    list[1] = 11; // list 배열의 두 번째 
    plist[0] = (int*)malloc(sizeof(int));
    printf("[----- [최나현] [2023041039] -----]\n");
    printf("list[0] \t= %d\n", list[0]);
    printf("list \t\t= %p\n", list);
    printf("&list[0] \t= %p\n", &list[0]);
    printf("list + 0 \t= %p\n", list+0);
    printf("list + 1 \t= %p\n", list+1);
    printf("list + 2 \t= %p\n", list+2);
    printf("list + 3 \t= %p\n", list+3);
    printf("list + 4 \t= %p\n", list+4);
    printf("&list[4] \t= %p\n", &list[4]);
    free(plist[0]);
 }