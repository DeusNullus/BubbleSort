#include<stdio.h>
#include<stdlib.h>

int randommer(void){
	int r = 0+rand()%100;
	return r;
}

int main(int n,char* a[]){
	int val = 0;
	switch(n){
		case 1:
		printf("No arguments,one minimum\n");
		break;
		case 2:
		val = 1;
		break;
		case 3:
		printf("One argument only\n");
		break;
		default:
		printf("Too many arguments!\n");
	}
	if(val==1){
		int lenght = atoi(a[1]);
		int arr[lenght-1];
		for(int i=0;i<lenght;i++){
			arr[i]=randommer();
		}
		int y = 0;
		//Algorithm
		do{
		for(int i=0;i<lenght;i++){
			if(arr[i]>arr[i+1]){
				int tm = arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=tm;
			}
		}
		y+=1;
		}
		while(y<lenght);
		//Checking
		for(int i=0;i<lenght;i++){
			printf("%d\n", arr[i]);
		}
	}
}