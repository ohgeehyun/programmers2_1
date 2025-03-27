//프로그래머스 2단계 최소값 만들기

/*
       처음보자마자 든 생각은 결국 최소값은 큰 수에서 작은 수를 곱해야 하니 두 배열중 하나는 큰 수로 하나는 작은 수 기준으로 정렬을 한다음 두 벡터의 i번째 끼리 곱하기면 된다. 라고 생각하고 접근을 함.
       즉 정렬만 되면 그리디 알고리즘 (큰수에서 작은 수를 곱한다.) 로 생각하고 해결
*/

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;

    //결국 큰수에서 작은수를 곱하는게 best니까 그리디?
    std::sort(A.begin(), A.end());
    std::sort(B.begin(), B.end(), std::greater<int>());

    for (int i = 0; i < A.size(); i++)
        answer += A[i] * B[i];

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;

    return answer;
}

int main()
{
   
}

