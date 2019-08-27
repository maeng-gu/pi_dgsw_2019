#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main() {
	int fd;
	int bufsize=32;
	int write_count;
	char buf[32];

	fd=open("./test.txt", O_CREAT|O_RDWR);
	printf("input message \n");
	scanf("%[^\n]s",buf);
	bufsize=strlen(buf);
	write_count=write(fd, buf, bufsize);

	printf("write data=%s\n",buf);
	return 0;
}
