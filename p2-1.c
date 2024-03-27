#include <stdio.h>
#define MAX_SIZE 100
 
 // sum1, sum2, sum3 함수의 원형 선언
 float sum1(float list[], int);
 float sum2(float *list, int);
 float sum3(int n, float *list);
 
 float input[MAX_SIZE], answer;
 int i;
 
 void main(void)
 {
    for(i=0; i < MAX_SIZE; i++) // 배열의 100번째 요소까지 0부터 1씩 커지는 값 할당
      input[i] = i;
    
    /* for checking call by reference */
    printf("[----- [최나현] [2023041039] -----]\n");
    printf("--------------------------------------\n");
    printf(" sum1(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); // input의 시작 주소(이름) 출력
    answer = sum1(input, MAX_SIZE); //sum1 함수 호출 후 변수 answer에 return 값 저장
    printf("The sum is: %f\n\n", answer); //answer를 float 형으로 출력
    
    printf("--------------------------------------\n");
    printf(" sum2(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); // input의 시작 주소(이름) 출력
    answer = sum2(input, MAX_SIZE); //sum2 함수 호출 후 변수 answer에 return 값 저장
    printf("The sum is: %f\n\n", answer); //answer를 float 형으로 출력
    
    printf("--------------------------------------\n");
    printf(" sum3(MAX_SIZE, input) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); // input의 시작 주소(이름) 출력
    answer = sum3(MAX_SIZE, input);//sum3 함수 호출 후 변수 answer에 return 값 저장
    printf("The sum is: %f\n\n", answer); //answer를 float 형으로 출력
 }
  
  float sum1(float list[], int n)
 {
    printf("list \t= %p\n", list); //배열 list의 시작 주소(이름) 출력
    printf("&list \t= %p\n\n", &list); //배열 list의 주소 출력
    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++) // 반복문을 통해 tempsum에 배열의 합 저장
      tempsum += list[i]; // 배열 list의 인덱스 i에 해당하는 요소를 직접 참조
    return tempsum;
 }
 
 float sum2(float *list, int n)
 {
    printf("list \t= %p\n", list); //배열 list의 시작 주소(이름) 출력
    printf("&list \t= %p\n\n", &list); //배열 list의 주소 출력
    int i;
    float tempsum = 0;
   for(i = 0; i < n; i++) // 반복문을 통해 tempsum에 배열의 합 저장
      tempsum += *(list + i); //배열 list의 시작 주소에서 i만큼 떨어진 요소를 간접 참조 
    return tempsum;
 }
     /* stack variable reuse test */
 
 float sum3(int n, float *list)
 {
    printf("list \t= %p\n", list); //배열 list의 시작 주소(이름) 출력
    printf("&list \t= %p\n\n", &list); //배열 list의 주소 출력
    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)// 반복문을 통해 tempsum에 배열의 합 저장
      tempsum += *(list + i);//배열 list의 시작 주소에서 i만큼 떨어진 요소를 간접 참조 
    return tempsum;
 }