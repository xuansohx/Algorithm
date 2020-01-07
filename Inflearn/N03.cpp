#include <iostream>
using namespace std;

int main(){
	// 문제3) 진약수의 합
	// 진약수? 자기 자신을 제외한 양의 약수
	int n, i;
	int sum=1; // 약수는 무조건 1부터 시작하는 것 감안하여 초기값 설정 
	cin>>n;
	cout<<"1"; // 1은 모든 수의 약수니까 출력
	for(i=2; i<n; i++){ // 진약수는 자기자신 제외니까, n은 제외
		if(n%i==0){
			cout<<" + "<<i;
			sum += i;
		}
	}
	cout<<" = "<<sum;
	return 0;
	
	
}