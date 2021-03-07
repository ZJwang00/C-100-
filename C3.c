//输入某年某月某日，判断这一天是这一年的第几天？

#include <stdio.h>



int main(){
	int year,month,day,sum;
	printf("请输入输入某年某月某日（格式如：2021 3 5）"); 
	scanf("%d%d%d",&year,&month,&day);
	switch(month){
		case 1:	sum = 0;	break;
		case 2: sum = 31;	break;
		case 3:	sum = 59;	break;
		case 4:	sum = 90;	break;
		case 5: sum = 120;	break; 
		case 6:	sum = 151;	break; 
		case 7:	sum = 181;	break; 
		case 8:	sum = 212;	break; 
		case 9:	sum = 242;	break;
		case 10:sum = 273;	break;
		case 11:sum = 303;	break;
		case 12:sum = 334;	break;		
	}
	int flag;
	if(year%400 == 0 || year%4==0 && year%100!=0){	//闰年 
		flag = 1; 
	}else{
		flag = 0;
	} 	
	if(flag == 1 && day > 2){
		sum++;
	}
	sum+=day;
	printf("是今年的第:%d天",sum);
	return 0;
} 
