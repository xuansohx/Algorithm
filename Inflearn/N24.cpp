#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	// 문제24) Jolly Jumpers
	/* N개의 수열에서 앞뒤의 숫자 차의 절대값이 N~1까지의 값을 가지면 
	유쾌한 점퍼(Jolly Jumpers)라 부름 -> 'YES' 출력 */
	
	int n, i, now, pre, position;
	scanf("%d", &n); // n개의 정수를 입력받음
	vector<int> check(n); // check 배열에 담아서 비교
	/* check 배열의 용도?
	n개의 정수가 들어오면 n-1의 차가 존재 -> check 배열의 값을 0과 1로 체크하여 표시 */
	scanf("%d", %pre); // 첫 번째 값 먼저 가져옴
	
	for(i=1; i<n; i++){
		scanf("%d", &now);
		position=abs(pre-now); // 절대값구함
		if(position>0 && position<n && check[position]==0) check[position]=1;
		// 이미 중복되는 값이 있거나, n-1보다 큰 값은 안됨! 
		/* check[position]이 앞으로 오게 되면 
		있지도 않은 인덱스의 값을 찾게되는 논리적 오류가 발생하므로 맨 뒤에 적어야 됨 */
		else{
			printf("NO\n");
			return 0; // 'NO'가 나오면 더이상 확인할 필요 없으니까, 출력 후 프래그램 종료
		}
		pre=now;
	}
	printf("YES\n");
	return 0;
}