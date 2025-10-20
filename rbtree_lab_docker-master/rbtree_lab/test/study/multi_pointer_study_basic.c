#include <stdio.h>
// 기찻길을 통한 비유
void swap_pointer(int **pp1, int **pp2) { // 2중 포인터로 2개의 단일 포인터 변수의 주소를 받음
    int *temp = *pp1; // *pp1은 int* (단일포인터)
    *pp1 = *pp2; // p1이 p2가 가리키는 곳으로 변경
    *pp2 = temp; // p2가 temp(p1의 원래 가리킴)으로 변경
} // 들어온 두 주소를 가리키던 포인터를 바꿔주는 함수

int main() {
    int a = 10, b = 20;
    int *p1 = &a;
    int *p2 = &b;

    swap_pointer(&p1, &p2); // 교차로에서 선로 방향 교체

    printf("*p1 = %d, *p2 = %d\n", *p1, *p2); // 20, 10
    return 0;
}
