 #include <stdio.h>
 #include <stdlib.h>

 void main()
 {
    int list[5]; //크기가 5인 정수형 배열 list 선언
    int *plist[5] = {NULL,}; //크기가 5인 포인터 배열 plist를 선언하고 NULL로 초기화
    
    plist[0] = (int *)malloc(sizeof(int)); //동적 메모리 할당을 통해 plist[0]에 int 크기만큼의 메모리 할당
    
    list[0] = 1; //list 배열 첫 번째 값에 1 할당
    list[1] = 100; // list 배열 두 번째 값에 100 할당
    
    *plist[0] = 200; // plist[0]이 가리키는 공간에 200 저장
    
    printf("[----- [최나현] [2023041039] -----]\n");
    printf("list[0]            = %d\n", list[0]); // list 배열의 첫 번째 요소 출력
    printf("&list[0]           = %p\n", &list[0]); // list 배열의 첫 번째 요소 주소 출력
    printf("list               = %p\n", list); // list 배열의 시작 주소(이름) 출력 (&list[0]과 같음) 
    printf("&list              = %p\n", &list); // list 배열의 주소 출력(list 배열의 시작 주소와 같음)
    printf("----------------------------------------\n\n");
    
    printf("list[1]            = %d\n", list[1]); // list 배열의 두 번째 요소 출력
    printf("&list[1]           = %p\n", &list[1]); // list 배열의 두 번째 요소 주소 출력
    printf("*(list+1)          = %d\n", *(list + 1)); // list 배열의 시작 주소에 1을 더한 주소의 값 출력 (list[1]과 같음) 
    printf("list+1             = %p\n", list+1);// list 배열의 시작 주소에 1을 더한 주소 출력 (&list[1]과 같음) 
    printf("----------------------------------------\n\n");
    
    printf("*plist[0]          = %d\n", *plist[0]); //plist[0]이 가리키는 주소의 값 출력
    printf("&plist[0]          = %p\n", &plist[0]); // plist[0]의 주소 출력
    printf("&plist = %p\n", &plist); //plist 배열의 주소 출력(plist 시작 주소와 같음)
    printf("plist = %p\n", plist); //plist 배열의 시작 주소(이름) 출력
    printf("plist[0]           = %p\n", plist[0]); // plist[0]이 가리키는 주소 출력
    printf("plist[1]           = %p\n", plist[1]); // plist[1]의 값 출력 (NULL로 초기화 되어있다)
    printf("plist[2]           = %p\n", plist[2]); // plist[2]의 값 출력 (NULL로 초기화 되어있다)
    printf("plist[3]           = %p\n", plist[3]); // plist[3]의 값 출력 (NULL로 초기화 되어있다)
    printf("plist[4]           = %p\n", plist[4]); // plist[4]의 값 출력 (NULL로 초기화 되어있다)
    
    free(plist[0]); // plist[0]이 가리키는 동적 할당된 메모리 공간 해제
 }