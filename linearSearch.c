#include <stdio.h>

int linearSearch(int *array, int size, int target){
    int i = 0;
    if (array[size] == 0)
        return -1;
    else if(array[i++] == target)
        return linearSearch(array,size+1,target);
}

int main(){

int array[] = {1,2,3,5,7,7,8,9,4,3,5};

int size = sizeof(array)/sizeof(array[0]);
printf("%d",linearSearch(array,size, 5));


return 0;
}