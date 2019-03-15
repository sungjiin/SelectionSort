// SelectedSort.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>
using namespace std;

//출력
void Print(int arr[], int size){
	for (int i = 0; i < size; i++) {
		cout << arr[i] << ' ';
	}
	cout << '\n';
};

//배열 값 스왑
void Swap(int arr[], int x, int y) {
	if (arr[x] > arr[y]) {
		int temp = arr[x];
		arr[x] = arr[y];
		arr[y] = temp;
	}
}

// 선택 정렬
void Selection_Sort(int *arr, int size) {
	
	for (int i = 0; i < size; i++) {
		Print(arr, size);
		for (int j = i + 1; j < size; j++) {
			Swap(arr, i, j);
		}
	}
}

//메인 함수
int main()
{
	int arr[] = { 5, 4, 3, 2, 1};
	cout << "Selection Sort" << '\n';
	Selection_Sort(arr, sizeof(arr)/sizeof(int));
}
