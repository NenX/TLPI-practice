#include <stdio.h> 
#include <unistd.h>
asm( 
    ".text\n" 
    ".global Add\n" 
    ".type Add, @function\n" 
    "Add:\n" 
    "leal 3(%rdi,%rsi,8), %eax\n" 
    "ret" 
); 
char *str="abcc";
extern "C" int Add(int, int); 
int main(int argc,char** argv) 
{ 
    int b=1,c=2; 
    int a = Add(b,c); 
    return 0; 
} 