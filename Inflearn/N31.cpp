#include <stdio.h>

int main(){
	// 문제31번) 탄화수소 질량
	/* 탄화수소식이 주어지면 해당 화합물의 질량을 구하는 프로그램
	탄소(C) 12g, 수소(H) 1g */
	
	char a[10]; // 화학식을 담을 배열 a
	int c=0, h=0, i, position;
	scanf("%s", &a);
	
	// 1. 탄소의 개수 확인
	if(a[1]=='H'){ 
		c=1; 
		/* 탄소가 1개이면 숫자를 기입하지 않고 바로 H를 씀 
		ex) CH2 -> a[0]=C, a[1]=H, a[2]=2 */
		position=1;
	}
	else{
		for(i=1; a[i]!='H'; i++){ // c가 몇 개나 있는지 확인
			c=c*10+(a[i]-48);
		}
		position=i;
	}
	
	// 2. 수소의 개수 확인
	if(a[position+1]=='\0') h=1;
	else{
		for(i=position+1; a[i]!='\0'; i++){
			h=h*10+(a[i]-48);
		}
	}
	
	/* 3. 탄소의 질량 12g과 수소의 질량 1g을 적용하여
	화합물의 질량을 계산하며 출력 */
	printf("%d\n", c*12+h);
	return 0;
	
	
}