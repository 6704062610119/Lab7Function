#include<stdio.h>

long convert(long h, long m, long s); 

int main(){
	long hour,minute,second;
	scanf("%ld %ld %ld",&hour,&minute,&second);
	long sec=convert(hour,minute,second);
	printf("%ld",sec);
	
	return 0;
}

long convert(long h, long m, long s){
	long sech=h*60*60;
	long secm=m*60;
	long sum=sech+secm+s;
	return sum;
}; 
