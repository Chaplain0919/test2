#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(int argc, char *argv[]){
	
	int n;
	n = atoi(argv[1]);

	int count=0;	

	bool prime = true;

	printf("Prime_numbers under %d:", n);

	for(int i =2; i<n; i++){
		for(int j=2; j<i; j++){
			if(i%j == 0){
				prime = false;
				break;

			}
		}
		if(prime == true){
			printf(" %d", i);
			count++;
		}

		prime = true;
	}
	
	printf("\n");
	
	printf("%d Prime_numbers detected\n", count);
	
	return 0;
} 
