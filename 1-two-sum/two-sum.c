/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i,j;
    int* array = (int*)malloc(2 * sizeof(int));
    if (array == NULL) {
         *returnSize = 0;
        return NULL; 
    }
    for (i=0; numsSize>i;i++){
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                array[0] = i;
                array[1] = j;
                *returnSize = 2;
                return array;
            }
        }
    }  
       *returnSize = 0;
    free(array);
    return NULL;
}