//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<math.h>
//int main(int argc, char* argv[])   //�����д��Σ�argc���������������argv��ʾ����Ĳ���
//{
//	int i, j;
//	int k = 0;
//	int count = 0;  //ͳ���ļ����ַ�����
//	int sum_row;  //ͳ���ļ����ַ�����
//	int flag = 0;
//	FILE* fp;  //�ļ�ָ��
//	FILE* fp1;
//	int a_in[200];  //�����ļ����ݵ�����
//	int b_in[200];  //�����ļ����ݵ�����
//	//fp = fopen_s(argv[1], "r");   //���ļ���ֻ��2
//	errno_t err = fopen_s(&fp, argv[1], "r");
//	//fp1=fopen("int_data.txt","r"); 
//	errno_t err1 = fopen_s(&fp1, argv[1], "r");
//	if (fp == NULL)
//	{
//		printf("File cannot open! ");
//		//exit;  
//		return 0;
//	}
//	if (argc != 2)   //�ж�������������������Ϊ2���ͱ���
//	{
//		printf("������������");
//		return -1;
//	}
//
//	while (!feof(fp))   //���ļ���ֱ���ļ�ĩβ
//	{
//		flag = fgetc(fp);  //���ļ����ݸ���flag
//		if (flag == '\n')  //���Ϊ\n��ʾ����β������м���
//			count++;
//	}
//	sum_row = count + 1; //�����ļ����һ�У���Ϊ�ļ��ܵ�����
//	printf("�ļ�����Ϊ��%d", sum_row);  //��ӡ�ļ���������Ϊÿ��ֻ��һ���������Լ�ͳ���ļ����ж��ٸ���
//	printf("\n");
//	for (i = 0; i < 200; i++)  //�����ļ�����
//	{
//		for (j = 0; j < 1; j++)  //�����ļ�����
//		{
//			fscanf_s(fp1, "%d", &a_in[j]);  //���ļ�����һ�����ݱ��浽������
//			b_in[k] = a_in[j];  //��������ÿһ�е����ݶ����浽b_in������
//			k++;  //������һ
//		}
//	}
//	printf("�ļ�����Ϊ��\n");
//	for (i = 0; i < k; i++)  //ѭ����ӡ���浽�����е�����
//	{
//		printf("%d\t", b_in[i]);  //��ӡ
//	}
//	fclose(fp);  //�ر��ļ����ͷ�ָ���ļ���ָ��
//	fclose(fp1);  //�ر��ļ����ͷ�ָ���ļ���ָ��
//	return 0;
//}
