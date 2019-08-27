#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main() {
	char filename[20] = "test.txt";
	int returndata = 0;
	int old = 0;

	old=umask(0);
	returndata = open(filename, O_TRUNC|O_CREAT, S_IRWXU|S_IRGRP);
	printf("%d\n", returndata);
	umask(old);
	return 0;
}
