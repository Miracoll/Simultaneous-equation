#include <stdio.h>

/*          x11 + y11 = d11
            x22 + y22 = d22

            x1 + y1 + z1 = d1
            x2 + y2 + z2 = d2
            x3 + y3 + z3 = d3
*/

int main()
{
    /*____________________________*/
	float x11,x22,y11,y22,d11,d22;
	float X,Y;
	/*____________________________*/
	float x1,x2,x3,y1,y2,y3,z1,z2,z3,d1,d2,d3;
	float x,y,z;

	int n;
	printf("How many unknown values?\n");
	scanf("%d", &n);
	while(n>3 || n<2){
        printf("How many unknown values?\n");
        scanf("%d", &n);
	}
	if(n == 2){
		printf("Enter value for x1:\n");
		scanf("%f", &x11);
		printf("Enter value for y1:\n");
		scanf("%f", &y11);
		printf("Enter value for d1:\n");
		scanf("%f", &d11);
		printf("Enter value for x2:\n");
		scanf("%f", &x22);
		printf("Enter value for y2:\n");
		scanf("%f", &y22);
		printf("Enter value for d2:\n");
		scanf("%f", &d22);
		X = ((d11*y22)-(d22*y11))/((x11*y22)-(x22*y11));
		Y = ((x11*d22)-(x22*d11))/((x11*y22)-(x22*y11));
		printf("X = %f\n", X);
		printf("Y = %f", Y);
	}
	else if(n == 3){
		printf("Enter value for x1:\n");
		scanf("%f", &x1);
		printf("Enter value for y1:\n");
		scanf("%f", &y1);
		printf("Enter value for z1:\n");
		scanf("%f", &z1);
		printf("Enter value for d1:\n");
		scanf("%f", &d1);
		printf("Enter value for x2:\n");
		scanf("%f", &x2);
		printf("Enter value for y2:\n");
		scanf("%f", &y2);
		printf("Enter value for z2:\n");
		scanf("%f", &z2);
		printf("Enter value for d2:\n");
		scanf("%f", &d2);
		printf("Enter value for x3:\n");
		scanf("%f", &x3);
		printf("Enter value for y3:\n");
		scanf("%f", &y3);
		printf("Enter value for z3:\n");
		scanf("%f", &z3);
		printf("Enter value for d3:\n");
		scanf("%f", &d3);
		x = ((d1*((y2*z3)-(y3*z2)))-(y1*((d2*z3)-(d3*z2)))+(z1*((d2*y3)-(d3*y2))))/((x1*((y2*z3)-(y3*z2)))-(y1*((x2*z3)-(x3*z2)))+(z1*((x2*y3)-(x3*y2))));
		y = ((x1*((d2*z3)-(d3*z2)))-(d1*((x2*z3)-(x3*z2)))+(z1*((d3*x2)-(d2*x3))))/((x1*((y2*z3)-(y3*z2)))-(y1*((x2*z3)-(x3*z2)))+(z1*((x2*y3)-(x3*y2))));
		z = ((x1*((d3*y2)-(d2*y3)))-(y1*((d3*x2)-(d2*x3)))+(d1*((x2*y3)-(x3*y2))))/((x1*((y2*z3)-(y3*z2)))-(y1*((x2*z3)-(x3*z2)))+(z1*((x2*y3)-(x3*y2))));
		printf("X = %f\n", x);
		printf("Y = %f\n", y);
		printf("Z = %f\n", z);
	}
    return 0;
}
