#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;  // p는 arr[0]을 가리킴
    int tmp;

    for (int i = 0; i < 5; i++){
        tmp += *(p + i);
    }
    printf("%d", tmp);
    
    return 0;
}
