
/*题目：企业发放的奖金根据利润提成。

利润(I)低于或等于10万元时，奖金可提10%；
利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；
20万到40万之间时，高于20万元的部分，可提成5%；
40万到60万之间时高于40万元的部分，可提成3%；
60万到100万之间时，高于60万元的部分，可提成1.5%；
高于100万元时，超过100万元的部分按1%提成。
从键盘输入当月利润I，求应发放奖金总数？

*/

#include <stdio.h>

int main(){
	double i;
	double bonus1,bonus2,bonus4,bonus6,bonus10;
	double bonus;
	bonus1 = 10 * 0.1;
	bonus2 = bonus1 + 10*0.075;
	bonus4 = bonus2 + 20*0.05;
	bonus6 = bonus4 + 20*0.03;
	bonus10 = bonus6 + 100*0.015;
	printf("请输入你的当月利润(单位万元)：");
	scanf("%lf",&i);
	if(i <= 10){
		bonus = i*0.1;
	}else if(i > 10 && i <= 20){
		bonus = bonus1 + (i-10)*0.075;
	}else if(i > 20 && i <= 40){
		bonus = bonus2 + (i-20)*0.05;
	}else if(i > 40 && i <= 60){
		bonus = bonus4 + (i-40)*0.03;
	}else if(i > 60 && i <= 100){
		bonus = bonus6 + (i-60)*0.015;
	}else if(i > 100){
		bonus = bonus10 + (i-100)*0.01;
	}
	
	printf("应发放奖金总数%.2lf(万元)",bonus);
	
	
	
	return 0;
}
