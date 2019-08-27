#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main() {
	int chk = 0;
	chk = open("test.txt", O_TRUNC|O_CREAT, S_IRWXU|S_IRGRP);
	printf("%d \n", chk);
	return 0;
}
