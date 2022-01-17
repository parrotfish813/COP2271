#include <stdio.h>
#include <stdlib.h>

struct Rectangle {

	double width;
	double height;

};

void getPerimeter(struct Rectangle* rectPtr);

int main() {

	struct Rectangle rect1 = { .height = 0, .width = 0 };


	puts("Please enter a width:");
	scanf("%lf", &rect1.width);
	puts("Please enter a height");
	scanf("%lf", &rect1.height);

	getPerimeter(&rect1);

	return 0;
}

void getPerimeter(struct Rectangle* rectPtr) {

	double perimeter, heightTemp, widthTemp;

	heightTemp = rectPtr->height;
	widthTemp = rectPtr->width;

	perimeter = 2.0 * (heightTemp + widthTemp);

	printf("The perimeter is: %.2lf", perimeter);

}
