/*
In C programming, a data type is the quiet rule that tells the computer what kind of data a variable can hold and how much memory it needs.

It is like a promise made before storing a value—
“This box will hold numbers,” or
“This one will hold letters,” or
“This one is meant for decimals.”


int %d
char %c
double %lf
float %f


*/

// Example to check bytes in code

#include <stdio.h>
int main(){
    printf("INT: %lu bytes\n", sizeof(int));
    printf("Float: %lu bytes\n", sizeof(float));
    printf("Double: %lu bytes\n", sizeof(double));
    printf("LongDouble: %lu bytes\n", sizeof(long double));
    printf("long: %lu bytes\n", sizeof(long));
    printf("Char: %lu bytes\n", sizeof(char));
    
    return 0;
}
// data types in int 
#include <stdio.h>
int main(){
    int age = 20;
    printf("The age = %d", age );
    return 0;
}

// data types in char 
#include <stdio.h>
int main (){
    char grade = 'B';
    printf("The grade = %c", grade);
}

// data types in float 
#include <stdio.h>
int main (){
    float ft = 20.1; 
    printf("The Float Number is %f", ft);
    return 0;
}

// data types in double 
#include <stdio.h>
int main (){
    
    double Num = 452822;
    printf("The Double Number = %lf", Num);
    return 0;
}

// Hold Data types code now here this 

#include <stdio.h>
int main(){
    int age = 20;
    double Number = 9552852;
    float height = 5.1f;
    long Lenth = 581; 
    char grade = 'A';
    
    
    printf("The age = %d\n", age);
    printf("The Height = %f\n", height);
    printf("The Number = %lf\n", Number);
    printf("The Lenth = %lf\n", Lenth);
    printf("The Grade = %c\n", grade);
    
    
    return 0;
}



