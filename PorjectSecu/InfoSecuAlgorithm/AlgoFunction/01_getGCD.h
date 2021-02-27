#pragma once
#define _CRT_OBSOLETE_NO_WARNINGS
#include <stdio.h>

#define TRUE    1
#define FALSE   0

////////////////////////////////////////////////////////////////////
// 01.최대공약수 Greatest Common Divisor
// 유클리드 호제법 Euclidean algorithm
// 유클리드(B.C.365~B.C.275)는 기하학의 아버지라고 불리는 유명한 고대 수학자입니다.
// 유클리드의 저서 중에서 가장 유명한 것이 총 13권으로 구성된 '기하학 원본'입니다.
// 이 책은 그의 선배인 피타고라스,플라톤,히포크라테스 등이 연구한 여러 가지 자료를
// 정선하고 거기에 자신의 창작을 가미하여 조직적인 교과서로 편찬한 것으로서
// 수학사상 최고의 성전이라고도 할 수 있습니다.
//
// 최대공약수란? 정수 a,b의 약수 중에서 공통된 약수를
// 공약수라고 하며 공약수 중에서 가장 큰 수를 최대 공약수라 합니다.
//
// 최대공약수를 구하기 위한 과정
// 1.정수 a의 약수로 구성된 집합 A를 구한다.
// 2.정수 b의 약수로 구성된 집합 B를 구한다.
// 3.정수 a와 b의 공약수로 구성된 집합 C를 구한다(집합 A와 B의 교집합).
// 4.집합 C에서 가장 큰수인 c가 정수 a와 b의 최대공약수이다.
//
// 한계점
// 1.정수의 약수를 구하는데 그 값이 매우 큰 경우에는 많은 시간이 걸린다.
// 2.A집합과 B집합의 교집합을 구해서 공약수 집합인 C를 만드는데 오래
//   걸린다. A와 B집합의 모든 요소들을 비교해서 같은 값을 찾는 작업이
//   집합내의 요소의 수가 많을 경우 많은 시간을 필요로 한다.
// 3.공약수의 집합인 C에서 최대공약수인 C를 찾는데 대소 비교를 통해
//   가장 큰 수를 찾아야 하므로 많은 시간이 소요된다.
//
// 유클리드 알고리즘
// 주어진 서로 소가 아닌 두 수 a,b에대해 최대공약수를 찾는 것으로
// 두개의 규칙을 전제로 하고 있다.
// 1.b가 a로 나눠서 떨어지면 두 수의 최대공약수는 b이다.
// 2.a를 b로 나눴을 때 나머지가 r이면 r과 b의 최대공약수를 구한다.
// 3.r이 0이 되면 b가 최대공약수이다.
// 
// ex> 120과 50의 최대공약수 구하기
// GCD(120, 50) = GCD(50, 20) = GCD(20, 10) = GCD(10, 0)
// 120을 50으로 나누면 r=20, b=50, 50을 20으로 나누면 r=10, b=20
// 20을 10으로 나누면 r=0, b=10, 최대공약수는 b=10

int getGCD(int nFir, int nSec);
