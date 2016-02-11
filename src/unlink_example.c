#include <stdio.h>
int main(int argc, char **argv){
	FILE* fp = fopen("f1.txt","w");
	fprintf(fp,"some data");
	fprintf(fp,"some other data\n");
	fclose(fp);
	
	unlink("f1.txt");	
	return 0;
}
