


int singleNumber(int *nums, int numsSize) {
    int a = nums[0];
    int flag = 0;
    for (int i = 0; i < numsSize; i++) {
        flag = 0;
        for (int j = 0; j < numsSize; j++) {
            if (j != i && nums[i] == nums[j]) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) { return nums[i]; }

    }
    return -1;
}

int main(){

    return 0;
}
