#include <stdio.h>

int main(){
	// 문제6) 숫자만 추출
	// 숫자만 추출하여 순서대로 자연수 만듦 + 약수의 개수 출력
	// 이 때 맨 앞의 0은 제외!
	
	char a[100]; // 입력한 값을 받기 위한 배열
	int result=0, cnt=0, i; // 숫자결과, 약수의 개수, for문
	scanf("%99s", a); // 배열a를 읽음 
	// 참고) " %s " 이런 식으로 불필요한 띄어쓰기 줄이기 -> 효율성 높이기 위함
	
	// 배열에서 자연수만 추출하기
	for(i=0; a[i]!='\0'; i++) {
	// 배열엔 끝을 알리는 문자열인 null 값이 있는데, '\0'으로 확인
		if(a[i]>=48 && a[i]<=57){
		// 부등호 두 개 연립하여 쓰면 인식 못 함 -> '&&' 사용
		// ascii code에서 48~57는 자연수 0~9를 의미함	
			result = result*10+(a[i]-48);
			// 문자로 된 ascii code 숫자화 하기 위하여 48을 빼줌
			/* 차례대로 자연수화 할 때 자릿수 때문에 *10을 함 
			-> 하나씩 앞으로 보내줘야 되니까 */
		}
	}
	printf("%d\n", result);
	
	// 자연수만 추출한 result의 약수의 개수 구하기
	for(i=1; i<=result; i++){
		if(result%i==0) cnt++;
	}
	printf("%d\n", cnt);
	
	return 0;	
}