
#include <stdio.h>
int main() {
    int age;
    
    printf("Enter age: ");
    scanf("%d", &age);
    
    printf("my age %d \n", age);
    
    return 0;
}

// take double input 
#include <stdio.h>
int main (){
    int age; 
    double Number; 
    
    printf("Enter age: "),
    scanf("%d", &age);
    
    printf("Enter Double Number: ");
    scanf("%lf", &Number);
    
    printf("My age: %d\n", age);
    printf("Double Number: %lf\n", Number);
    return 0; 
}

// multiple input now 
#include <stdio.h>
int main (){
    int age; 
    double Number; 
    
    printf("Enter Multiple value: "),
    scanf("%d %lf", &age, &Number);
    
    
    printf("My age: %d\n", age);
    printf("Double Number: %lf\n", Number);
    return 0; 
}


// end
