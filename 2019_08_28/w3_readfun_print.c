#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
	int fd;
	int buf_size=10;
	int read_count;
	char buf[10];

	fd=open("./test.txt", O_CREAT|O_RDWR,0666);
	read_count=read(fd,buf,buf_size);
	printf("bufsize = %d, read_count=%d", buf_size, read_count);
	printf("read data=%s",buf);
	return 0;
}

//chmod ㅈㅓㅂ ㄱㅡㄴ ㄱㅜㅓㄴ ㅎㅏㄴ ㅅㅓㄹ ㅈㅓㅇ
