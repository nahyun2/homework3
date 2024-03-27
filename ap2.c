 #include <stdio.h>
 #include <stdlib.h>

 void main()
 {
    int list[5]; // 크기가 5인 list 배열을 선언 
    int *plist[5]; // 크기가 5인 plist 포인터 배열을 선언
    
    list[0] = 10; // list 배열의 첫 번째 요소에 10 저장
    list[1] = 11; // list 배열의 두 번째 요소에 11 저장
    plist[0] = (int*)malloc(sizeof(int)); // 동적 메모리 할당을 통해 plist[0]에 int 크기만큼의 메모리 할당
    
    printf("[----- [최나현] [2023041039] -----]\n"); 
    printf("list[0] \t= %d\n", list[0]); //list 배열의 첫 번째 요소 출력
    printf("list \t\t= %p\n", list); // list 배열의 시작 주소 출력(=&list[0])
    printf("&list[0] \t= %p\n", &list[0]); // list 배열의 첫 번째 요소의 주소 출력
    printf("list + 0 \t= %p\n", list+0); //list +0은 list 배열의 첫 번째 주소를 가리키고 있어서 list의 첫 번째 요소의 주소를 출력
    printf("list + 1 \t= %p\n", list+1); //list +1은 list 배열의 두 번째 주소를 가리키고 있어서 list의 두 번째 요소의 주소를 출력
    printf("list + 2 \t= %p\n", list+2); //list +2은 list 배열의 세 번째 주소를 가리키고 있어서 list의 세 번째 요소의 주소를 출력
    printf("list + 3 \t= %p\n", list+3); //list +3은 list 배열의 네 번째 주소를 가리키고 있어서 list의 네 번째 요소의 주소를 출력
    printf("list + 4 \t= %p\n", list+4); //list +4은 list 배열의 다섯 번째 주소를 가리키고 있어서 list의 다섯 번째 요소의 주소를 출력
    printf("&list[4] \t= %p\n", &list[4]); //list 배열의 다섯 번째 요소의 주소를 출력 
    
    free(plist[0]);// plist[0]이 가리키는 동적 할당된 메모리 공간 해제
 }