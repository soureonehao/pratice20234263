#include<stdio.h>
int a(int a1, int a2) {
	if (a1 > a2)
		return a2;
	else
		return a1;
}
void main() {
	int a1, a2, a3;
	int *a11 = &a1;
	int *a12 = &a2;
	int *a13 = &a3;
	
	printf("ÇëÊäÈë3¸öÊı£º");
	scanf_s("%d%d%d", a11, a12, a13);
	a(a1, a(a2, a3));
	printf("%d", a(a1, a(a2, a3)));

}