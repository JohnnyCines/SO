#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char* argv[argc+1]) {
    if(argc < 3) return 1;
    int size;
    if(argc>=4) size=atoi(argv[3]);
    else size=1;
    char* buf=malloc(sizeof(char[size]));
    int fdi = open(argv[1], O_RDONLY);
    if (fdi < 0) return 1;
    int fdo = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0666);
    if (fdo < 0) return 1;
    while(1){
        int n = read(fdi, buf, size);
        if(n<=0) break;
        write(fdo, buf, n);
    }
    close(fdi);
    close(fdo);
    free(buf);


}