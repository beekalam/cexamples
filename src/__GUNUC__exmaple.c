#include <stdio.h>
int main(int argc,char **argv){
    //current include depth level
    printf("include depth level : %d\n",__INCLUDE_LEVEL__);
    //complete version
#ifdef __VERSION__
    printf("%s\n",__VERSION__);
#endif
    //major version
    printf("%d\n",__GNUC__);
    printf("%d\n",__GNUC_MINOR__);
    printf("%d\n",__GNUC_PATCHLEVEL__);
    
#ifdef __STRICT_ANSI__
    //defined only if -std and -ansi has
    //been defined
    printf("%d\n",__STRICT_ANSI__);
#endif

#ifdef __cplusplus
#ifdef __GNUC__
    printf("%d\n",__GNUG__);
#endif
#endif
    return 0;

}
