 #include <stdio.h>
 #include <stdlib.h>

 void main()
 {
    int list[5]; // ũ�Ⱑ 5�� list �迭�� ����
    int *plist[5]; // ũ�Ⱑ 5�� plist ������ �迭�� ����
    list[0] = 10; // list �迭�� ù ��° 
    list[1] = 11; // list �迭�� �� ��° 
    plist[0] = (int*)malloc(sizeof(int));
    printf("[----- [�ֳ���] [2023041039] -----]\n");
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