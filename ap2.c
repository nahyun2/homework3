 #include <stdio.h>
 #include <stdlib.h>

 void main()
 {
    int list[5]; // ũ�Ⱑ 5�� list �迭�� ���� 
    int *plist[5]; // ũ�Ⱑ 5�� plist ������ �迭�� ����
    
    list[0] = 10; // list �迭�� ù ��° ��ҿ� 10 ����
    list[1] = 11; // list �迭�� �� ��° ��ҿ� 11 ����
    plist[0] = (int*)malloc(sizeof(int)); // ���� �޸� �Ҵ��� ���� plist[0]�� int ũ�⸸ŭ�� �޸� �Ҵ�
    
    printf("[----- [�ֳ���] [2023041039] -----]\n"); 
    printf("list[0] \t= %d\n", list[0]); //list �迭�� ù ��° ��� ���
    printf("list \t\t= %p\n", list); // list �迭�� ���� �ּ� ���(=&list[0])
    printf("&list[0] \t= %p\n", &list[0]); // list �迭�� ù ��° ����� �ּ� ���
    printf("list + 0 \t= %p\n", list+0); //list +0�� list �迭�� ù ��° �ּҸ� ����Ű�� �־ list�� ù ��° ����� �ּҸ� ���
    printf("list + 1 \t= %p\n", list+1); //list +1�� list �迭�� �� ��° �ּҸ� ����Ű�� �־ list�� �� ��° ����� �ּҸ� ���
    printf("list + 2 \t= %p\n", list+2); //list +2�� list �迭�� �� ��° �ּҸ� ����Ű�� �־ list�� �� ��° ����� �ּҸ� ���
    printf("list + 3 \t= %p\n", list+3); //list +3�� list �迭�� �� ��° �ּҸ� ����Ű�� �־ list�� �� ��° ����� �ּҸ� ���
    printf("list + 4 \t= %p\n", list+4); //list +4�� list �迭�� �ټ� ��° �ּҸ� ����Ű�� �־ list�� �ټ� ��° ����� �ּҸ� ���
    printf("&list[4] \t= %p\n", &list[4]); //list �迭�� �ټ� ��° ����� �ּҸ� ��� 
    
    free(plist[0]);// plist[0]�� ����Ű�� ���� �Ҵ�� �޸� ���� ����
 }