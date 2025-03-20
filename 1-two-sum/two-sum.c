/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
        *returnSize = 2;
        int *resulet = (int*)malloc(*returnSize *sizeof(int));

    for(int i=0; i < numsSize;i++){
        for (int j=i+1; j < numsSize;j++){
            if (target == nums[i]+nums[j]){
                resulet[0] = i;
                resulet[1] = j;
                return resulet;
            }
        }
    }
    return resulet;
}