#include <stdio.h>
#include <stdbool.h>
//�����õ���ע������Ϳ�����

int main()
{
	int year = 1982;
	int month = 10;
	int day = 10;
	int tall = 175;
	bool sex = true; // �涨: ��Ϊtrue, ŮΪfalse 
	printf(":%d%-02d%-02%d\n",year,month,day,);
	printf(":%d\n", tall);
	printf(":%d\n", sex);
/*�ɶ��Ժ���Ҫ
�հ׺�ע�ͶԳ�������Ӱ�죬ֻ��Ӱ�����ɶ���
����ǰҪ�пո�
�Ʊ��tab����������
VS17�Դ��������ܵ�س�������
����Ƕ���ע��


*/
getchar();
return 0;
}