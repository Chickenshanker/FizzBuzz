#include <stdio.h>
#include <string.h>
#include <malloc.h>
#define FIZZ "Fizz"
#define BUZZ "Buzz"
#define FIZZ_NUM 3
#define BUZZ_NUM 5
#define MAX 100
char* fizzBuzz(short int x){
	char* result = malloc(sizeof(FIZZ) + sizeof(BUZZ));
	char* temp = result;
	sprintf(result, "%d", x);
	if(x % FIZZ_NUM == 0){strncpy(temp, FIZZ, sizeof(FIZZ));
	while(*temp ){temp++;};		}
	if(x % BUZZ_NUM == 0){strncpy(temp, BUZZ, sizeof(FIZZ));
	while(*temp ){temp++;};		}
	return result;
}
int main(void){
	for(int i = 0; i - 1 < MAX; i++){
		printf("%s\n", fizzBuzz(i));
	}	
	return 0;
}
