#include <stdio.h>
#include <stdlib.h>
int user_array[9];
int summation(){
  int summ = 0;
  for(int j = 0; j < 9 ; j++)
    {
     summ += user_array[j];
  }

  printf("summation; %d", &summ);
  return summ;
}

int maximum(){
  int maximum = user_array[0];
  for(int x = 0; x < 9; x++){
    if (maximum < user_array[x]){
        maximum = user_array[x];
      }
}
return maximum;
printf("maximum: %d", &maximum);
}

int main(){
void get_user_input(){
  for( int i = 0; i < 9 ; i++){
     printf("enter a number:");
     scanf("%d",&user_array[i]);
}
}
    get_user_input();
    summation();
    maximum();
    return 0;
}


