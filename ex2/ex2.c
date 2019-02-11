#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/syscall.h>

int main(){
	long ret = syscall(335);
	printf("this syscall return number is: %ld\n", ret);
	return 0;
}
