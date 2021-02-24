#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

int main(void){
    while (1)
    {
        char c;
        int n = read(0, &c, 1);
        if(n==0)
            break;
        write(1, &c, 1);
    }
        
}