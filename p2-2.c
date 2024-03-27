#include <stdio.h>
 
 void print_one(int *ptr, int rows);
 // print_one 함수 원형 선언
 
 int main()
 {
    int one[] = {0, 1, 2, 3, 4}; // int형 배열 one 을 선언 후 초기화
    
    printf("[----- [최나현] [2023041039] -----]\n");
    printf("one      = %p\n", &one); // 배열 one의 주소를 출력
    printf("&one    = %p\n", one);  // 배열의 이름은 배열의 첫 번째 요소의 주소를 가리키므로 배열의 시작 주소 출력
    printf("&one[0] = %p\n", &one[0]); // 배열 one의 첫 번째 요소인 one[0]의 주소 출력
    printf("\n");
    
    printf("------------------------------------\n");
    printf("  print_one(&one[0], 5) \n");
    printf("------------------------------------\n");
    
    print_one(&one[0], 5); //print_one 함수 호출, 배열 one의 주소와 배열의 크기 전달
    
    printf("------------------------------------\n");
    printf("  print_one(one, 5) \n");
    printf("------------------------------------\n");
    
    print_one(one, 5); // print_one 함수 호출, 배열 one의 이름과 배열의 크기 전달
    return 0;
 }
 
 void print_one(int *ptr, int rows)
 {
    /* print out a one-dimensional array using a pointer */
    int i;
    printf ("Address \t Contents\n");
    for (i = 0; i < rows; i++) //배열의 크기만큼 각 요소의 주소와 값을 출력을 반복
        printf("%p \t  %5d\n", ptr + i, *(ptr + i));
    printf("\n");
    }

    