#include <stdio.h>

int check[10];
/* check는 어떤 수가 가장 많이 사용되었는지 체크하기 위한 전역변수
check 배열의 index 0,1,2~9의 값을 count하여 확인할 수 있음 */
int main(){
	// 문제13) 가장 많이 사용된 자릿수
	/* 입력된 자연수의 자릿수 중 가장 많이 사용된 숫자를 출력
	만일, 답이 여러 개인 경우 그 중 가장 큰 수를 출력 */
	
	int i, digit, max=-2147000000, result;
	char a[101]; // 입력 받은 값은 배열에 저장 -> int는 읽을 수 없기 때문에 string 형태
	scanf("%s", &a);
	
	// 1. 입력 받은 수의 각 자릿수를 읽어 count 함
	for(i=0; a[i]!='\0'; i++){
		// 배열의 첫 시작은 0부터이므로 i의 초기값 설정할 때 주의
		// 배열 a는 char 형태이기 때문에 ascii code 변환이 필요
		digit=a[i]-48;
		// 만일, digit가 5이면 check[5]의 값을 +1하는 방식으로 count
		check[digit]++;
	}
	
	// 2. 가장 많이 사용된 수를 출력 
	// 같은 개수 만큼 사용된 수가 있으면 최대값이 출력
	for(i=0; i<=9; i++){
		// for문을 활용하여 차례대로 check 배열을 읽으며 max 비교
		if(check[i]>=max){
			max=check[i];
			result=i;
		}
	}
	
	printf("%d\n", result);
	return 0;
	
}