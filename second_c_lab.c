#include <stdio.h>

/* Q1

int main(){
    
    int a, b, sum;
    printf("please enter two numbers for sum of them\n");
    scanf("%d %d", &a, &b);
    sum=a+b;
    printf("sum: %d", sum);

    return 0;
}*/

/* Q2

int main(){

    double radius, area;
    printf("enter a radius for calculate the are of the circle\n");
    scanf("%lf", &radius);
    area=3.14*radius*radius;
    printf("area: %lf", area);

    return 0;
}*/

/* Q3

int main(){

    double number;
    printf("enter a number\n");
    scanf("%lf", &number);
    if (number==0)
    {
        printf("number is zero\n");
    }
    else if (number<0)
    {
        printf("number is negative\n");
    }
    else
    {
        printf("number is positive\n");
    }
    
    return 0;
}*/

/* Q4

int main()
{
    
    double d;
    printf("enter temperature of weather\n");
    scanf("%lf", &d);
    if (d == 0)
    {
        printf("hava 0 derecedir\n");
    }
    else if (d < 0)
    {
        printf("below the freesing point\n");
    }
    else
    {
        printf("above the freezing point\n");
    }
    
    return 0;
}*/

/* Q5

int main(){

    double f, c;

    printf("enter fahrenheit\n");
    scanf("%lf", &f);
    c=(f-32)*5/9;
    printf("%lf fahrenheit: %lf celsius", f, c);

    return 0;
}*/

/* Q6

int main(){

    double f, cm;
    printf("enter lenght in feet\n");
    scanf("%lf", &f);
    cm=f*30.48;
    printf("%lf lenght in feet: %lf centimeter", f, cm);

    return 0;
}*/

/* Q7

int main(){

    int square, i;
    for ( i = 1; i <= 10; i++)
    {
        square=i*i;
        printf("square of %d: %d\n", i, square);
    }
    return 0;
}*/

/* Q8

int main(){
    
    int a, b, c, largest;
    printf("enter three numbers\n");
    scanf("%d %d %d", &a, &b, &c);
    if (b>a && b>c)
    {
        largest=b;
    }
    else if (c>a && c>b)
    {
        largest=c;
    }
    else
    {
        largest=a;
    }
    printf("largest number: %d", largest);
    return 0;
}*/
