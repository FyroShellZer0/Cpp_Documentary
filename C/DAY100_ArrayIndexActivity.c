#include <stdio.h>
#include <stdlib.h>
int get(int *nums, int size, int target) {
    for(int i = 0; i < size; i++) {
        if(nums[i] == target){
            return i;
        }
        else{
            continue;
        }
    }
}
int main(void) {
    int target;
    int nums[] = {10, 5, 15, 6, 13, 20, 51, 100, 1000, 500};
    int n = sizeof(nums)/sizeof(nums[0]);
    for(int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    printf("Enter target index: ");
    scanf("%d", &target);
    switch(target) {
        case 10: target = 10;break;
        case 5: target = 5;break;
        case 15: target = 15;break;
        case 6: target = 6;break;
        case 13: target = 13;break;
        case 20: target = 20;break;
        case 51: target = 51;break;
        case 100: target = 100;break;
        case 1000: target = 1000;break;
        case 500: target = 500;break;
        default: printf("invalid!\n");
        return 1;
    }
    int result = get(nums, n, target);
    printf("index: %d\n", result);
    return 0;
}