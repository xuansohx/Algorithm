#include <stdio.h>
// 함수 선언 (자릿수 분리하여 sum에 저장하는 함수)
int digit_sum(int x){ // num이 x로 넘어온 것
	int sum=0, tmp;
	while(x>0){
		tmp=x%10; // 10으로 나눈 나머지가 tmp에 저장
		sum=sum+tmp; // 일의 자리부터 차례대로 sum에 저장
		x=x/10; // x를 10으로 나눈 몫만 다시 tmp로 들어감
	}
	return sum;
}

int main(){
	// 문제10) 자릿수의 합
	// N개의 자연수가 입력되면 각 자연수의 자릿수의 합을 구하고,
	// 그 합이 최대인 자연수를 출력
	
	int n, num, i, sum, max=-2147000000, result;
	// max 값은 항상 이렇게 초기화하기!
	scanf("%d", &n);
	
	// 입력된 n개의 수를 num에 하나씩 대입하여 자릿수의 합을 구함
	for(i=1; i<=n; i++){
		scanf("%d", &num);
		sum=digit_sum(num); // 위에서 선언한 함수 'digit_sum'으로 감
		if(sum>max){
			max=sum;
			result=num; // sum의 최댓값을 만드는 num을 저장하여 출력
		}
	}
	printf("%d\n", result);
	return 0;
}