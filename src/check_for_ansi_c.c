#include <stdio.h>
int main(int argc,char **argv){

#ifdef __STDC__
    printf("Congratulations! you  are confirming perfectly with ansi c");
#else
    printf("shame on you, you noncomforming anti-ansi c");
#endif
    
    return 0;

}
