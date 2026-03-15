// Program to find sum of a geometric series
#include <stdio.h>
#include <math.h>

int main() {
    int a,r,n;
    float s;
    printf("Enter the first term , a = " );
    scanf("%d",&a);
    printf("Enter the common ratio , r = ");
    scanf("%d",&r);
    printf("Enter the number of terms , n = ");
    scanf("%d",&n);
    
    s=a*(pow(r,n) - 1)/(r-1);
    
    printf("Sum of geometric series is = %f" ,s);
    return 0;
}
