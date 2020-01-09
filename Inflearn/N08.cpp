#include <stdio.h>

int main(){
	// 문제8) 올바른 괄호
	// 괄호의 쌍이 맞으면 YES, 그렇지 않으면 NO
	
	char a[30];
	int i, cnt=0;
	scanf("%29s",a);
	
	for(i=0; a[i]!='\0'; i++){
		// 1. '(' 모양이 있으면 cnt++;
		if(a[i]=='(') cnt++;
		// 2. ')' 모양이 있으면 cnt--;
		else if(a[i]==')') cnt--;
		if(cnt<0) break; 
		// 개수는 일치하는데 방향이 ')('는 불가능하므로 break
	}
	// 3. cnt의 값이 '0'이면 YES, 그렇지 않으면 NO
	if(cnt==0) printf("YES\n");
	else printf("NO\n");
	
	return 0;
}

	// 나중에 stack으로 풀어보기