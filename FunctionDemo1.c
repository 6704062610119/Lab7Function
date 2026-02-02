#include<stdio.h>

double functionM(void);
int functionN(int n, double x);
double functionO(double, int, double, int);
double functionP(int a, int n, int b, int c);
 
int main(void) {
  	int a, b, c, d, e;
  	double r, s, t, u, v;
  	//function calling (a-k)
  	/*//-------------a)--------------//
    functionM(); // runได้แต่ไม่แสดงค่าอะไรออกมาเพราะยังไม่ได้เอาค่าไปเก็บไว้ในตัวแปร
    
    //-------------b)-------------//
	a = functionM(); 
	printf("%d\n",a); // runได้แต่ค่าที่ได้อาจไม่ตรงเพราะฟังก์ชันรีเทิร์นเป็นdouble แต่ตัวแปร a เป็นint

	//-------------c)-------------//
	b = functionN(a, b);
	printf("%d",b);  // ถูกต้องส่งintและdouble(bถูกแปลง) ฟังก์ชันรีเทิร์นเป็นint และตัวแปร b ก็เป็นint

	//-------------d)-------------//
	r = functionO(r,a,s,b);
	printf("%lf",r); // ถูกต้องส่งค่าตรงหมด รีเทิร์นและรับค่ากลับตรงกันคือdouble

	//-------------e)-------------//
	s = functionP(a,b,c,d,e);
	printf("%lf",s); //ผิดส่งอาร์กิวเมนต์5ตัว แต่ฟังก์ชันรับแค่4ตัว
	
	//-------------f)-------------//
	u = functionM();
	printf("%lf",u);  //ถูกต้องรับค่าdouble มาใส่ในตัวแปร u ที่เป็นdoubleเหมือนกัน

	//-------------g)-------------//
	c = d + functionN(r,s);
	printf("%d",c); //runได้แต่ระวังเรื่องการส่ง double ไปพารามิเตอร์ที่เป็น int

	//-------------h)-------------//
	t = s * functionO(r, a, r, a);
	printf("%lf",t); //ถูกต้องรับค่าdouble มาใส่ในตัวแปร t ที่เป็นdoubleเหมือนกัน

	//-------------i)-------------//
	a = v + functionP(r, s, t, t);
	printf("%d",a); //runไดเแต่ค่าสุดท้ายถูกเก็บใน a ซึ่งเป็นintอาจทำให้ทศนิยมหาย

	//-------------j)-------------//
	functionP(functionN(a, a), s, t, t+r); //runได้เป็นการใช้ผลลัพธ์จากฟังก์ชันหนึ่งเป็นพารามิเตอร์ให้อีกฟังก์ชันแต่ไม่แสดงค่าอะไรออกมา
	*/
	//-------------k)-------------//
	v = functionP(functionN(a, a), s, t, t+r);
	printf("%lf",v); //ถูกต้องส่งอาร์กิวเมนต์ครบ รีเทิร์นและรับค่ากลับตรงกันคือdouble

}

double functionM(void){
	return 5.0;
};

int functionN(int n, double x){
	return 10;
};

double functionO(double a, int b, double c, int d){
	return 1.1;
};

double functionP(int a, int n, int b, int c){
	return 2.2;
};
