#include <stdio.h>
#include <algorithm>
int a[60], b[60]; // count를 위한 배열
	
int main(){
	// 문제16) Anagram
	/* Anagram? 두 문자열의 순서는 다르지만 구성이 같은 단어
	-> Anagram 판별 프로그램 만들기 */
	
	/* Key Point : ascii code 이용 
	ascii code A~Z(65~90), a~z(97~122) */
		
	char str[100]; // 입력한 문자를 str에 담음
	int i;
	
	// 1. 첫 번째 문자 입력 -> 배열[a]에 표시
	scanf("%99s", str);
	for(i=0; str[i]!='\0'; i++){
		if(str[i]>=65 && str[i]<=90){
			a[str[i]-64]++;
		}
		else a[str[i]-70]++;
	}

	// 2. 두 번째 문자 입력 -> 배열[b]에 표시
	scanf("%99s", str);
	for(i=0; str[i]!='\0'; i++){
		if(str[i]>=65 && str[i]<=90){
			b[str[i]-64]++;
		}
		else b[str[i]-70]++;
	}
	
	// 3. 배열 a와 b를 비교하여 확인
	for(i=1; i<=52; i++){
		if(a[i]!=b[i]){
			printf("NO\n");
			exit(0);
		}
	}
	printf("YES\n");
	
	return 0;	
}