#include <iostream>
using namespace std;

int main(){
	// 문제4) 나이 차이
	// 최대 나이 차이를 출력하기 -> (max)-(min)
	
	// n명의 나이를 모두 입력받으려면 data 값이 많음 -> 파일로 입력받기
	// freopen("파일명","mode",stdin); mode = rt(ReadText)
	// freopen("input.txt", "rt", stdin);
	
	int n, i, a;
	// 최대최소를 비교할 때, max와 min의 값 미리 선언하는 것 권장
	int max=-2147000000, min=2147000000;
	
	cin>>n; // n명의 나이를 입력
	for(i=1; i<=n; i++){ // n명의 나이를 모두 비교
		cin>>a; // a로 받는 값이 나이
		// a는 n개 만큼 입력을 받야하는데, for문 안에 넣으면 a 변수 하나로 n개를 받음
		if(a>max) max=a;
		if(a<min) min=a;
	}
	cout<<max-min;
	return 0;
}