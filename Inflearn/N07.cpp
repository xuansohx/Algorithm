#include <stdio.h>

int main(){
	// 문제7) 영어단어 복구
	// 공백을 제거한 후, 소문자화 하여 출력
	
	char a[101], b[101]; // 배열a에서 입력을 받고, 배열b에서 제거하고 복구
	int i, position=0;
	//gets_s(a);
	fgets(a, sizeof(a), stdin);
	/* 띄어쓰기까지 포함하여 한 줄을 읽으려면 scanf는 안돼
	scanf는 공백을 제외한 문자만 읽기 때문에 gets로 배열 한 줄을 읽음 */
	/* gets 보다는 gets_s와 fgets 권장! gets_s는 오류 나서 fgets 사용
	-> 왜 그런지 이유 공부하기 !!! */
	
	for(i=0; a[i]!='\0'; i++){
		// 1. 공백을 제거하기
		if(a[i]!=' '){ // 띄어쓰기로 공백을 앎
			// 2. 대소문자 구분
			if(a[i]>=65 && a[i]<=90){
				// 3. 대문자일 경우 소문자화 (+32)
				// 왜냐하면, ascii code A~Z(65~90) & a~z(97~122)
				b[position++]=a[i]+32;
			}
			else b[position++]=a[i];
		}
	}
	b[position]='\0'; 
	// 배열의 마지막을 알리는 null 값을 넣음
	// 이 값('\n') 넣어주지 않으면 실행 안 되는 경우 있음
	printf("%s\n",b);
	
	return 0;
}