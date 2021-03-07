#include <stdio.h>

//1 1 2 3 5 8 13...

int main(){
	int f1=1,f2=1;
	for(int i = 1; i <= 20; i++){
		printf("%12d%12d",f1,f2);
		if(i%2==0)
			printf("\n");
		f1 = f1+f2;	//下个月是上两个月之和
		f2 = f1+f2;
	}
	return 0;	
}
