#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main(int argc, char* argv[])   //�����д��Σ�argc���������������argv��ʾ����Ĳ���
{
	int i, j;
	int k = 0;
	int count = 0;  //ͳ���ļ����ַ�����
	int sum_row;  //ͳ���ļ����ַ�����
	int flag = 0;  //������ʱ���ļ����ݱ���
	FILE* fp;    //�ļ�ָ��
	FILE* fp1;
	FILE* fp2;
	int* a_in;   //���ڶ��ļ��е�����
	int* b_in;   //���ڱ�����ļ��ж��������
	//fp = fopen_s(argv[1], "r");   //���ļ���ֻ��2
	errno_t err = fopen_s(&fp, argv[1], "r");
	errno_t err1 = fopen_s(&fp1, argv[1], "r");
	errno_t err2 = fopen_s(&fp2, "test_write.txt", "w");
	//fp = fopen(argv[1], "r");   //���ļ���ֻ����argv[1]�����������������ļ����ƣ�������.exe����ʱ����ĵڶ�������
	//fp1 = fopen(argv[1], "r");   //�ٴδ��ļ�������һ�δ��ļ�����ͳ���ļ��������������ݵĸ��������ڽ��ļ����ݱ��浽ָ��������
	//fp2 = fopen("test1.txt", "w");   //���ļ���ֻд�����ڽ������������±��浽��һ���ļ���
	if (fp == NULL)    //���ļ�ʧ��
	{
		printf("File cannot open! ");
		//exit;  
		return 0;
	}
	if (argc != 2)   //�ж�������������������Ϊ2���ͱ���
	{
		printf("������������");
		return -1;
	}

	while (!feof(fp))  //���ļ���ֱ���ļ�ĩβ
	{
		flag = fgetc(fp);  //���ļ����ݸ���flag
		if (flag == '\n')  //���Ϊ\n��ʾ����β������м���
		{
			count++;  //ͳ���ļ�����
		}
	}
	sum_row = count + 1; //�����ļ����һ�У���Ϊ�ļ��ܵ�����
	printf("�ļ�����Ϊ��%d", sum_row);  //ͳ���ļ���������Ϊÿ��ֻ��һ���������Լ�ͳ���ļ����ж��ٸ���
	printf("\n");
	a_in = (int*)malloc(sizeof(int) * sum_row);  //��̬�������ڱ����ļ����ݵ�ָ�����鳤�ȣ��������
	b_in = (int*)malloc(sizeof(int) * sum_row);  //��̬�������ڱ����ļ����ݵ�ָ�����鳤�ȣ��������
	if (!a_in)   //��̬�ڴ����ʧ��
	{
		printf("�ڴ����ʧ��");
		return-1;
	}
	if (!b_in)  //��̬�ڴ����ʧ��
	{
		printf("�ڴ����ʧ��");
		return-1;
	}

	for (i = 0; i < sum_row; i++)  //�����ļ�����
	{
		for (j = 0; j < 1; j++)   //�����ļ�����
		{
			fscanf_s(fp1, "%d", &a_in[j]);  //���ļ�����һ�����ݱ��浽ָ��������
			b_in[k] = a_in[j];    //��������ÿһ�е����ݶ����浽b_inָ��������
			k++;  //������һ
		}
	}
	printf("�ļ�����Ϊ��\n");
	for (i = 0; i < k; i++)  //ѭ����ӡ���浽ָ�������е�����
	{
		printf("%d\t", b_in[i]);  //��ӡ
		fprintf(fp2, "%d\n", b_in[i]);  //�����浽��������ݱ��浽test1.txt�ļ���
	}
	fclose(fp);  //�ر��ļ����ͷ�ָ���ļ���ָ��
	fclose(fp1);  //�ر��ļ����ͷ�ָ���ļ���ָ��
	fclose(fp2);
	return 0;
	free(a_in);  //�ͷ�ָ��
	free(b_in);  //�ͷ�ָ��
	return 0;
}
