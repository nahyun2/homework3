#include <stdio.h>
 
 void print_one(int *ptr, int rows);
 // print_one �Լ� ���� ����
 
 int main()
 {
    int one[] = {0, 1, 2, 3, 4}; // int�� �迭 one �� ���� �� �ʱ�ȭ
    
    printf("[----- [�ֳ���] [2023041039] -----]\n");
    printf("one      = %p\n", &one); // �迭 one�� �ּҸ� ���
    printf("&one    = %p\n", one);  // �迭�� �̸��� �迭�� ù ��° ����� �ּҸ� ����Ű�Ƿ� �迭�� ���� �ּ� ���
    printf("&one[0] = %p\n", &one[0]); // �迭 one�� ù ��° ����� one[0]�� �ּ� ���
    printf("\n");
    
    printf("------------------------------------\n");
    printf("  print_one(&one[0], 5) \n");
    printf("------------------------------------\n");
    
    print_one(&one[0], 5); //print_one �Լ� ȣ��, �迭 one�� �ּҿ� �迭�� ũ�� ����
    
    printf("------------------------------------\n");
    printf("  print_one(one, 5) \n");
    printf("------------------------------------\n");
    
    print_one(one, 5); // print_one �Լ� ȣ��, �迭 one�� �̸��� �迭�� ũ�� ����
    return 0;
 }
 
 void print_one(int *ptr, int rows)
 {
    /* print out a one-dimensional array using a pointer */
    int i;
    printf ("Address \t Contents\n");
    for (i = 0; i < rows; i++) //�迭�� ũ�⸸ŭ �� ����� �ּҿ� ���� ����� �ݺ�
        printf("%p \t  %5d\n", ptr + i, *(ptr + i));
    printf("\n");
    }

    