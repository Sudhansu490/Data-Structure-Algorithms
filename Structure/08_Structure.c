//Wap using Structure to enter two points and then calculate the distance between them
#include<stdio.h>
#include<math.h>
struct distance{
	float x1,x2,y1,y2,distance;
};
int main()
{
	struct distance point;
	printf("Enter Point 1(x1,y1)\n");
	scanf("%f %f",&point.x1,&point.y1);
	printf("Enter Point 2(x2,y2)\n");
	scanf("%f %f",&point.x2,&point.y2);
	
	point.distance=sqrt(((point.x2-point.x1)*(point.x2-point.x1))+((point.y2-point.y1)*(point.y2-point.y1)));
	
	printf("The first point is (%0.2f,%0.2f)\n",point.x1,point.y1);
	printf("The Second point is (%0.2f,%0.2f)\n",point.x2,point.y2);
	printf("So the Distance between (%0.2f,%0.2f) and (%0.2f,%0.2f) is %0.2f\n",
	       point.x1,point.y1,point.x2,point.y2,point.distance);
    return 0;
}
