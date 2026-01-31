#include<stdio.h>

void printHead(int w);
void printBody(int w, int h);

int main(){
	int width,height;
	scanf("%d %d",&width,&height);
	
	printHead(width);
	printBody(width,height); //row = height-2 column = index=0 index=width-1
	printHead(width);

	
	return 0;
}

void printHead(int w){
	int i;
	for(i=0;i<w;i++){
		printf("* ");
	}
	printf("\n");
};

void printBody(int w, int h){
	int i,j;
	for(i=0;i<h-2;i++){ //row
		for(j=0;j<w;j++){
			if(j==0 || j==w-1){
				printf("* ");
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
};
