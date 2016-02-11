#include <stdio.h>
char *returnAStaticLiteral(int code,int subCode){
    static char* bpCenter = "Boston procesing center";
    static char* dpCenter = "Denver processing center";
    static char* apCenter = "Atlanta processing center";
    static char* sjpCenter = "San jose processing center";
    switch(code){
        case 100:
            return bpCenter;
        case 135:
            if(subCode < 35){
                return dpCenter;
            }else{
                return bpCenter;
            }
        case 200:
              return dpCenter;
        case 300:
                return apCenter;
        case 400:
                return  sjpCenter;
    }
}
int main(int argc,char **argv){
    printf("%s\n",returnAStaticLiteral(100,100));
    printf("%s\n",returnAStaticLiteral(135,10));
    return 0;

}
