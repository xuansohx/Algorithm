#include <stdio.h>
// 사용 할 함수 선언
int reverse(int x){
	/* reverse는 뒤집은 함수
	num을 int x 로 받음 */
	
	int result=0, tmp;
	while(x>0){
		tmp=x%10; 
		result=result*10+tmp; // 기존의 수를 한 칸씩 앞으로 이동
		x=x/10;
	}
	
	return result;
}

bool isPrime(int x){
	/* isPrime은 소수인지 확인하는 함수
	소수는 1과 자신 만을 약수로 가지는 수 */
	int i;
	if(x==1) return false; // 1은 소수가 아니므로 제외
	// if문의 참거짓만 확인하면 되기 때문에 bool형이 flag 변수 선언
	bool flag = true;
	
	for(i=2; i<x; i++){
		if(x%i==0){ // 2부터 하나라도 약수를 가지면 소수가 아니므로 false
			flag=false;
			break; // 가까운 반복문 빠져나옴 -> for문 나옴
		}
	}
	return flag;
}

/* 만일 선언하는 함수가 main 함수 아래에 있으면 head가 또 필요하지만,
main 함수 위에 선언하게 되면 하나의 head만 사용하면 됨 */

int main(){
	// 문제14) 뒤집은 소수
	/* N개의 자연수가 입력되면 각 자연수를 뒤집은 후,
	뒤집은 수가 소수이면 그 수를 출력 */
	
	int n, num, i, tmp;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		// n개의 num이 들어오므로 n번 체크
		scanf("%d", &num); // num을 입력 받아서
		tmp=reverse(num); // reverse 함수를 이용하여 뒤집음
		if(isPrime(tmp)) printf("%d ", tmp); // if문이 참이면 소수이므로 그대로 출력
	}
	
	return 0;
}