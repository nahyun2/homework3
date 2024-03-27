 #include <stdio.h>
 #include <stdlib.h>

 void main()
 {
    int list[5]; //ũ�Ⱑ 5�� ������ �迭 list ����
    int *plist[5] = {NULL,}; //ũ�Ⱑ 5�� ������ �迭 plist�� �����ϰ� NULL�� �ʱ�ȭ
    
    plist[0] = (int *)malloc(sizeof(int)); //���� �޸� �Ҵ��� ���� plist[0]�� int ũ�⸸ŭ�� �޸� �Ҵ�
    
    list[0] = 1; //list �迭 ù ��° ���� 1 �Ҵ�
    list[1] = 100; // list �迭 �� ��° ���� 100 �Ҵ�
    
    *plist[0] = 200; // plist[0]�� ����Ű�� ������ 200 ����
    
    printf("[----- [�ֳ���] [2023041039] -----]\n");
    printf("list[0]            = %d\n", list[0]); // list �迭�� ù ��° ��� ���
    printf("&list[0]           = %p\n", &list[0]); // list �迭�� ù ��° ��� �ּ� ���
    printf("list               = %p\n", list); // list �迭�� ���� �ּ� ��� (&list[0]�� ����) 
    printf("&list              = %p\n", &list); // list �迭�� �ּ� ���(list �迭�� ���� �ּҿ� ����)
    printf("----------------------------------------\n\n");
    
    printf("list[1]            = %d\n", list[1]); // list �迭�� �� ��° ��� ���
    printf("&list[1]           = %p\n", &list[1]); // list �迭�� �� ��° ��� �ּ� ���
    printf("*(list+1)          = %d\n", *(list + 1)); // list �迭�� ���� �ּҿ� 1�� ���� �ּ��� �� ��� (list[1]�� ����) 
    printf("list+1             = %p\n", list+1);// list �迭�� ���� �ּҿ� 1�� ���� �ּ� ��� (&list[1]�� ����) 
    printf("----------------------------------------\n\n");
    
    printf("*plist[0]          = %d\n", *plist[0]); //plist[0]�� ����Ű�� �ּ��� �� ���
    printf("&plist[0]          = %p\n", &plist[0]); // plist[0]�� �ּ� ���
    printf("&plist = %p\n", &plist); //plist �迭�� �ּ� ���(plist ���� �ּҿ� ����)
    printf("plist = %p\n", plist); //plist �迭�� ���� �ּ� ���
    printf("plist[0]           = %p\n", plist[0]); // plist[0]�� ����Ű�� �ּ� ���
    printf("plist[1]           = %p\n", plist[1]); // plist[1]�� �� ��� (NULL�� �ʱ�ȭ �Ǿ��ִ�)
    printf("plist[2]           = %p\n", plist[2]); // plist[2]�� �� ��� (NULL�� �ʱ�ȭ �Ǿ��ִ�)
    printf("plist[3]           = %p\n", plist[3]); // plist[3]�� �� ��� (NULL�� �ʱ�ȭ �Ǿ��ִ�)
    printf("plist[4]           = %p\n", plist[4]); // plist[4]�� �� ��� (NULL�� �ʱ�ȭ �Ǿ��ִ�)
    
    free(plist[0]); // plist[0]�� ����Ű�� ���� �Ҵ�� �޸� ���� ����
 }