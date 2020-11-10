#pragma once
#define _CRT_OBSOLETE_NO_WARNINGS
#include <stdio.h>

#define MAX_SIZE 10		// 04 마방진 배열 사이즈
#define TRUE    1
#define FALSE   0

////////////////////////////////////////////////////////////////////
// 04. 마방진 Magic Square
// 중국 전설의 주인공인 한나라의 우임금은 홍수를 다스리려고 황하강의 지류에서 물길을
// 고치다가 거북 등껍질에 새겨진 이상한 그림을 얻었다고 합니다. 낙서라 불리는 이 그림에는
// 1부터 9까지의 숫자가 3*3의 정사각형에 배열되 있었다고 합니다. 그런데 신기한 것은
// 늘어선 숫자들이 가로,세로, 대각선 어느 방향으로 더해도 그 합이 15가 되는 것이었습니다.
// 그래서 고대 중국에서는 이 낙서가 우주의 원리를 포함하고 있다고 여기고 신비한 힘을
// 가지고 있다고 생각하게 되었습니다. 이처럼 1부터 연이은 숫자를 정사각형 모양으로 배열해
// 가로와 세로, 대각선 방향의 합이 모두 같도록 배열한 것을 "마방진"이라고 합니다.
// 마방진에는 가로,세로를 구성하는 항목의 개수에 따라서 여러 차수의 마방진이 존재합니다.
// 즉 가로 세로가 3개의 항목으로 구성된 낙서는 3차 마방진이 되며, 4개의 항목으로
// 구성되면 4차 마방진이라고 합니다. 옛날부터 많은 사람들이 이와 같이 신비로운 마방진에
// 몰두해왔는데 지금 이 순간에도 새로운 마방진 해법이 연구되고 있으며 세상에 소개되고
// 있습니다. 여기에서는 가장 많이 쓰이고 있는 홀수 마방진과 4의 배수 마방진을 알아봅니다.
// 4-1 홀수차 마방진
void InitSquare();
void GetOddSquare(int n);
void ShowSquare(int n);
// 4-2 4의 배수 마방진 그림 관계로 설명 생략 생각해서 채우기
int IsInBlock(int n, int row, int col);
/*void InitSquare();
void GetQuaterSquare(int n);
void ShowSquare(int n);
*/
