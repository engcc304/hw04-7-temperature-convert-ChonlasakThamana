    *จงเขียนโปรแกรมเพื่อแปลงอุณหภูมิ โดยรับมาจากผู้ใช้เป็นองศาเซลเซียส และแปลงเป็นฟาเรนไฮต์
    Test case:
        User input :
            22
    Output:
        22 degree Celsius = 71.6 degree Fahrenheit

    Test case:
        User input :
            36
    Output:
        36 degree Celsius = 96.8 degree Fahrenheit

#include <stdio.h>

int main() {
    double degree Celsius, degree Fahrenheit;

    printf("Enter an angle in degree Celsius: ");
    scanf("%.2f", &degree Celsius);

    degree Fahrenheit = degree Celsius * 9/5 + 32;
    printf("%.2f degree Celsius = %.2f degree Fahrenheit\n", degree Celsius, degree Fahrenheit);
    
    return 0;
}