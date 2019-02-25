#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/syscall.h>

int main(){
//	const char *a = "source";
//	const char *b = "target";
//	char a[100], b[100];
//	scanf("%s%s", a, b);
	long ret = syscall(334, "ex2.c", "1.c");
//	long ret = syscall(333);
	printf("this syscall return number is: %ld\n", ret);
	return 0;
}
