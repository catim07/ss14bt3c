#include<stdio.h>
int main(){
	char string[]="cuong le";
	int size=sizeof(string)/sizeof(string[0]);
	for(int i=size;i!=-1;i--){
		printf("%c",string[i]);
	}
	return 0;
}
