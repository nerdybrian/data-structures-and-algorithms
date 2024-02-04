#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int main(){

int array[9] {1,2,3,4,5,6,7,8,9};
int i;

//printing the array in original order
for(i = 0; i < 9; i++){
    printf("%d: ", array[i]);
}

printf("\n")

// reverse order
for(i = 9; i >= 9 ; i--){
    printf("%d: ", array[i]);
}
return 0;
}
