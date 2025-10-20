#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};  
    // int형 변수 5개를 한 번에 만든 것
    // arr[0] ~ arr[4]까지 인덱스로 접근 가능

    printf("%d\n", arr[0]); // 0번째 요소 출력 → 10
    printf("%d\n", arr[1]); // 1번째 요소 출력 → 20
    printf("%d\n", arr[4]); // 4번째 요소 출력 → 50

    arr[2] = 100; // 2번째 요소(30)를 100으로 변경
    printf("%d\n", arr[2]); // 100 출력

    // 반복문으로 전체 출력
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
