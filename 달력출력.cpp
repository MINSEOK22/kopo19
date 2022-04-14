#include <stdio.h>
#define leapyear(year) ((year)%4==0 && ( (year)%100!=0 || (year)%400==0 )) 

int main(void)
{
	int year, month;
	int totalday[]={0,31,28,31,30,31,30,31,31,30,31,30,31}; 
	int lastyear, day, i;
	printf("��� ����� �޷��� ����Ͻðڽ��ϱ�?: ");
	scanf("%d %d",&year,&month);
	if(month==2 && leapyear(year)) 
		totalday[2]=29;

	lastyear=year-1; 

	day = (lastyear+(lastyear/4)-(lastyear/100)+(lastyear/400)+1)%7;
	

	for(i=1;i<month;i++)
		day+=totalday[i];

	day%=7; 
	printf("\n           %d�� %d��\n",year,month); 
	printf("\n  ��  ��  ȭ  ��  ��  ��  ��"); 

	for(i=-day;i<totalday[month];i++)
	{
		if((i+day)%7 == 0) 
			printf("\n");
		if(i<0) 
			printf("    ");
		else 
			printf("%4d",i+1);
	}
	printf("\n\n");

	return 0;
}
