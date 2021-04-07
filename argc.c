#include<stdio.h>
#include<stdlib.h>

main(int argc,char  *argv[])
/*argc is the number of argument adn argv is agument its self*/
{
	int i;
	printf("argc=%d\n",argc);
	for(i=0;i<argc;i++){
		printf("argv[%d]=%s\n",i,argv[i]);
	}
	exit(0);

}
