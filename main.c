#include <stdio.h>
#include <string.h>

int main(){
    float num;
    char suhu[4];

    printf("Enter temperature: ");
    scanf("%f %s",&num,suhu);
    if (strcmp(suhu, "C") == 0 || strcmp(suhu, "c") == 0) {
        float f = (9.0 / 5.0) * num + 32;
        float k = num + 273.15;
        float r = (4.0 / 5.0) * num;
        float ra = (num + 273.15) * 9.0 / 5.0;
        printf("Reamur = %.2f, Fahrenheit = %.2f, Kelvin = %.2f ,Rankine = %.2f\n", r, f, k ,ra);
    }  else if (strcmp(suhu, "R") == 0 || strcmp(suhu, "r") == 0) {
        float c = num / 0.8;
        float f = (num * 2.25) + 32;
        float k = (num / 0.8) + 273.15;
        float ra = (num * 2.25) + 491.67;
        printf("Celcius = %.2f, Fahrenheit = %.2f, Kelvin = %.2f ,Rankine = %.2f\n", c, f, k ,ra);
    }else if (strcmp(suhu, "F") == 0 || strcmp(suhu, "f") == 0) {
         float c = (num - 32) * 5.0 / 9.0;
        float k = (num + 459.67) * 5.0 / 9.0;
        float r = (4.0 / 9.0) * (num - 32);
        float ra = num + 459.67;
        printf("Celcius = %.2f, Reamur = %.2f, Kelvin = %.2f ,Rankine = %.2f\n", c, r, k);
    } else if (strcmp(suhu, "K") == 0 || strcmp(suhu, "k") == 0) {
        float c = num - 273.15;
        float f = (num * 9.0 / 5.0) - 459.67;
        float r = (4.0 / 5.0) * (num - 273);
        float ra = num * 9.0 / 5.0;
        printf("Celcius = %.2f, Reamur = %.2f, Fahrenheit = %.2f , Rankine = %.2f\n", c, r, f,ra);
    } else if (strcmp(suhu, "Ra") == 0 || strcmp(suhu, "ra") == 0) {
        float c = (num - 491.67) * 5.0 / 9.0;
        float f = num - 459.67;
        float k = num * 5.0 / 9.0;
        float r = (num / 1.8 + 273.15) * 0.8;
        printf("Celcius = %.2f, Reamur = %.2f, Fahrenheit = %.2f,Kelvin = %.2f,\n", c, r, f,k);
    }else {
        printf("Satuan suhu tidak valid!\n");
    }
    
    
}