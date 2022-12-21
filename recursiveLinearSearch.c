#include <stdio.h>


int recursiveLinearSearch(int*array, int size, int target){
    if (size == 0)
        return -1;
    else if(array[size-1] == target)
        return recursiveLinearSearch(array,size-1,target);
    
}

int main(){

int array[] = {1,2,3,4,5,8,6,3,8,8,9,1,9};
int len = sizeof(array)/sizeof(array[0]);
printf("%d\n",recursiveLinearSearch(array,len,8));

return 0;
}