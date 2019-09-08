#include <iostream>
#include <math.h>

void c1_4(){
	int a, b;
	scanf_s("%d%d", &a, &b);
	printf("%d\n", a + b);

	float c, d;
	scanf_s("%f %f", &c, &d);
	printf("%f\n", c * d);
}

void lt1_1() {
	float r, h, s;
	scanf_s("%f %f", &r, &h);
	s = 3.14 * r * r * 2 + 3.14 * 2 * r * h;
	printf("%.3f", s);
}

void lt1_1_sample() {
	const double pi = acos(-1.0);
	double r, h, s1, s2, s;
	scanf_s("%lf%lf", &r, &h);
	s1 = pi * r * r;
	s2 = 2 * pi * r * h;
	s = s1 * 2.0 + s2;
	printf("Area= %.3f\n", s);
}


void lt1_2() {
	int number, h, t, o;
	scanf_s("%d", &number);
	h = number / 100;
	t = number / 10 % 10;
	o = number % 10;

	printf("%d%d%d", o, t, h);
}

void lt1_3() {
	int num1, num2,num3;
	scanf_s("%d %d", &num1, &num2);
	num3 = num1;
	num1 = num2;
	num2 = num3;
	printf("%d %d", num1, num2);
}

void lt1_4(){
	int head, leg, chicken, rabbit;
	scanf_s("%d %d", &head, &leg);
	rabbit = leg / 2 - head;
	chicken = 2 * head - leg / 2;
	if (leg % 2 == 1 || rabbit < 0 || chicken < 0) {
		printf("No answer\n");
	}
	else {
		printf("There are %d chickens and %d rabbits", chicken, rabbit);
	}
}

void lt1_5() {
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	if (a < b) {
		if (b < c) {

		}
		else {
			b = b + c;
			c = b - c;
			b = b - c;
			if (a < c) {

			}
			else {
				a = a + c;
				c = a - c;
				a = a - c;
			}
		}
	}
	else {
		a = a + b;
		b = a - b;
		a = a - b;
		if (b < c) {

		}
		else {
			b = b + c;
			c = b - c;
			b = b - c;
			if (a < b) {

			}
			else {
				a = a + b;
				b = a - b;
				a = a - b;

			}
		}
	}
	printf("%d %d %d", a, b, c);
}

void lt1_5_sample() {
	int a, b, c, t;
	scanf_s("%d %d %d", &a, &b, &c);
	if (a > b) {
		t = a;
		a = b;
		b = t;
	}
	if (a > c) {
		t = a;
		a = c;
		c = t;
	}
	if (b > c) {
		t = b;
		b = c;
		c = t;
	}
	printf("%d %d %d", a, b, c);
}

int main()
{
	lt1_5_sample();
}