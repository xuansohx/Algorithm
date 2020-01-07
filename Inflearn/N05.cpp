#include <stdio.h>

int main(){
	// 문제5) 나이 계산
	// 주민등록번호로 나이와 성별 구하기
	
	// (cin & cout)보다 (scanf & printf)가 더 빠름
	char a[20]; // 주민등록번호 배열에 담음
	int year, age;
	scanf("%19s", a);
	// scanf에서 "%s"만 쓰면 오류 -> length 때문? 
	
	// 나이
	// a[]는 char형 이므로 '' 사용해서 비교
	/* a[]을 그대로 연산하면 ascii code로 되므로 주의
	ascii code :: A~Z(65~90), a~z(97~122), 0~9(48~57) */
	if(a[7]=='1' || a[7]=='2') year=1900+((a[0]-48)*10+(a[1]-48));
	else year=2000+((a[0]-48)*10+(a[1]-48));
	age=2019-year+1; // 한국 나이는 +1
	printf("%d", age);
	
	// 성별 -> M(man) & W(woman)
	if(a[7]=='1' || a[7]=='3') printf("M/n");
	else printf("W/n");
	
	return 0;
}