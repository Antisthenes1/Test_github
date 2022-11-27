#include "stdio.h"

// typedef a b ���������b����a����������

// ����һ���ṹ������
struct point {
	int x;
	int y;
};

struct point* getStruct(struct point*);
void output(struct point);
void print(const struct point* p);

int main(int argc, char const* argv[]) 
{
	//�����ṹ�����
	struct point y = { 0,0 };
	//����ṹ������ĵ�ַ
	getStruct(&y);
	//����ṹ��
	output(y);
	//����ṹ��ĵ�ַ��return�˽ṹ��ĵ�ַ����ͨ����ַ���ʽṹ��
	output(*getStruct(&y));
	//����ṹ������ĵ�ַ��������ַ
	print(getStruct(&y));

	return 0;
}

/// <summary>
/// ��ʾgetStruct����һ��struct����
/// </summary>
struct point* getStruct(struct point* p)
{
	scanf_s("%d", &p->x);
	scanf_s("%d", &p->y);
	printf("%d, %d\n", p->x, p->y);
	return p;

}

void output(struct point p)
{
	printf("%d ,%d\n", p.x, p.y);
		
}

void print(const struct point* p)
{
	printf("%d, %d\n", p->x, p->y);

}