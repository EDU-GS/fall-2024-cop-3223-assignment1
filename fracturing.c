#include <stdio.h>
#include <math.h>


#define PI 3.14159
double calculateDistance();
double calculateWidth();
double calculateHeight();

double calculatePerimeter();
double calculateArea();




int main(int arge, char **argv)
{

    double distance = calculateDistance();
    printf("The distance between them is %.2lf\n", distance);

    calculateWidth();

    calculateHeight();

    calculatePerimeter();

    calculateArea();

    return 0;
} 


double calculateDistance()
{

    double x1, y1, x2, y2;
    
    // printf("Enter the coordinates of Point #1 ");
    scanf("%lf %lf", &x1, &y1);

    printf("Point #1: x1 = %.2lf; y1 = %.2lf \n", x1, y1);

    // printf("Enter the coordinates of Point #2 ");
    scanf("%lf %lf", &x2, &y2);

    printf("Point #2: x2 = %.2lf; y2 = %.2lf \n", x2, y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    return distance;
}

double calculateHeight(){

    double x1, y1, x2, y2;
    // printf("Enter the coordinates of Point #1 ");
    scanf("%lf %lf", &x1, &y1);

    printf("Point #1: x1 = %.2lf; y1 = %.2lf \n", x1, y1);

    // printf("Enter the coordinates of Point #2 ");
    scanf("%lf %lf", &x2, &y2);

    printf("Point #2: x2 = %.2lf; y2 = %.2lf \n", x2, y2);
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double height = distance * 2;

    printf("The height of the city encompasssed by your quest is %.2lf\n", height);
    
    return 2.0;
}

double calculateWidth(){

    double x1, y1, x2, y2;
    // printf("Enter the coordinates of Point #1 ");
    scanf("%lf %lf", &x1, &y1);

    printf("Point #1: x1 = %.2lf; y1 = %.2lf \n", x1, y1);

    // printf("Enter the coordinates of Point #2 ");
    scanf("%lf %lf", &x2, &y2);

    printf("Point #2: x2 = %.2lf; y2 = %.2lf \n", x2, y2);
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double width = distance * 2;

    printf("The width of the city encompasssed by your quest is %.2lf\n", width);
   
    return 2.0;
}

double calculatePerimeter(){
    
    double radius = calculateDistance();

    double perimeter = 2 * PI * radius;


    printf("The perimeter of the city encompasssed by your quest is %.2lf\n", perimeter);
    printf("\n");

    return 2.0;
}

double calculateArea(){

    double radius = calculateDistance();
    double area = (pow(radius, 2)* PI);
    printf("The area of the city encompasssed by your quest is %.2lf\n", area);
   
    return 2.0;
}





