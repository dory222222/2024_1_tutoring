#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int addStrings(char st1[100], char st2[100], char r[200]) {
    int i, j;
    for (i = 0; st1[i] != 0; i++) { //���ڿ� �迭�� 0�� �ɶ����� �ݺ����� ����
        r[i] = st1[i]; //ó�� �Է¹��� ���� 0���� ���ʴ�� �Űܹ���
    }
    r[i] = ' '; //�������
    j = i;
    for (i = 0; st2[i] != 0; i++) { //���ڿ� �迭�� 0�� �ɶ����� �ݺ����� ����
        r[j + 1] = st2[i];  //���ڿ� �迭 r�� �Է¹��� ���� �κк��� �Űܹ���
        j++;
    }
    r[j + 1] = 0; //�� ���� �𸣰ڴµ� 0�� �ȳ־��ָ� �̻��Ѱ� ��µ� ��
    return 0;
}

int main() {
    char str1[100], str2[100], result[200];
    printf("ù ��° ���ڿ� �Է�: ");
    scanf("%s", str1);

    printf("�� ��° ���ڿ� �Է�: ");
    scanf("%s", str2);

    addStrings(str1, str2, result);

    printf("��� ���ڿ�: %s\n", result);

    return 0;
}