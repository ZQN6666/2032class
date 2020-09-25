#include <stdio.h>
#include <stdbool.h>
//新手用单行注释这个就可以了

int main()
{
	int year = 1982;
	int month = 10;
	int day = 10;
	int tall = 175;
	bool sex = true; // 规定: 男为true, 女为false 
	printf(":%d%-02d%-02%d\n",year,month,day,);
	printf(":%d\n", tall);
	printf(":%d\n", sex);
/*可读性很重要
空白和注释对程序功能无影响，只是影响代码可读性
内容前要有空格
制表符tab键控制缩进
VS17自带缩进功能点回车键即可
这个是多行注释


*/
getchar();
return 0;
}