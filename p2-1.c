#include <stdio.h>
#define MAX_SIZE 100
 
 // sum1, sum2, sum3 �Լ��� ���� ����
 float sum1(float list[], int);
 float sum2(float *list, int);
 float sum3(int n, float *list);
 
 float input[MAX_SIZE], answer;
 int i;
 
 void main(void)
 {
    for(i=0; i < MAX_SIZE; i++) // �迭�� 100��° ��ұ��� 0���� 1�� Ŀ���� �� �Ҵ�
      input[i] = i;
    
    /* for checking call by reference */
    printf("[----- [�ֳ���] [2023041039] -----]\n");
    printf("--------------------------------------\n");
    printf(" sum1(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); // input�� ���� �ּ�(�̸�) ���
    answer = sum1(input, MAX_SIZE); //sum1 �Լ� ȣ�� �� ���� answer�� return �� ����
    printf("The sum is: %f\n\n", answer); //answer�� float ������ ���
    
    printf("--------------------------------------\n");
    printf(" sum2(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); // input�� ���� �ּ�(�̸�) ���
    answer = sum2(input, MAX_SIZE); //sum2 �Լ� ȣ�� �� ���� answer�� return �� ����
    printf("The sum is: %f\n\n", answer); //answer�� float ������ ���
    
    printf("--------------------------------------\n");
    printf(" sum3(MAX_SIZE, input) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); // input�� ���� �ּ�(�̸�) ���
    answer = sum3(MAX_SIZE, input);//sum3 �Լ� ȣ�� �� ���� answer�� return �� ����
    printf("The sum is: %f\n\n", answer); //answer�� float ������ ���
 }
  
  float sum1(float list[], int n)
 {
    printf("list \t= %p\n", list); //�迭 list�� ���� �ּ�(�̸�) ���
    printf("&list \t= %p\n\n", &list); //�迭 list�� �ּ� ���
    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++) // �ݺ����� ���� tempsum�� �迭�� �� ����
      tempsum += list[i]; // �迭 list�� �ε��� i�� �ش��ϴ� ��Ҹ� ���� ����
    return tempsum;
 }
 
 float sum2(float *list, int n)
 {
    printf("list \t= %p\n", list); //�迭 list�� ���� �ּ�(�̸�) ���
    printf("&list \t= %p\n\n", &list); //�迭 list�� �ּ� ���
    int i;
    float tempsum = 0;
   for(i = 0; i < n; i++) // �ݺ����� ���� tempsum�� �迭�� �� ����
      tempsum += *(list + i); //�迭 list�� ���� �ּҿ��� i��ŭ ������ ��Ҹ� ���� ���� 
    return tempsum;
 }
     /* stack variable reuse test */
 
 float sum3(int n, float *list)
 {
    printf("list \t= %p\n", list); //�迭 list�� ���� �ּ�(�̸�) ���
    printf("&list \t= %p\n\n", &list); //�迭 list�� �ּ� ���
    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)// �ݺ����� ���� tempsum�� �迭�� �� ����
      tempsum += *(list + i);//�迭 list�� ���� �ּҿ��� i��ŭ ������ ��Ҹ� ���� ���� 
    return tempsum;
 }