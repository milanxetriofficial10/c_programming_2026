/*
1. what is variable in c programming 
  - In C programming, a variable is like a container or a box that holds data.
   It is a named storage location in memory where you can store values that your 
   program can use and change while it runs.

   #Declaration
   int age; 
   float prices; 
   char grade


   #Initialization
   int age = 20;
   float prices = 20.2;
   char grade = 'A';
   

   #usage 
   age = age + 1;
   printf("%d", age );


int integer number
float decimal number 
character single character

*/
// simple program in variable
 #include <stdio.h>

 int main(){

  int age;
  age = 20;
  int age = 21; // same here  one line code now this : 
  printf("The age = %d", age);
 }



// here this code now 
#include <stdio.h>

int main() {
    // Variable declaration र initialization
    int age = 25;
    float height = 5.9;
    char grade = 'A';

    // Variable को value print गर्नु
    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("Grade: %c\n", grade);

    return 0;
}


// the change value of variable 
#include <stdio.h>
int main(){
  char grade = 'B';
  printf("The Grade = %c\n", grade);

  grade = 'A';
  printf("The New Grade = %c\n", grade);

  return 0;
}

// assign variable to another variable in c programming 
#include <stdio.h>
int main(){
    
    int firstnumber = 20;
    printf("The First Number = %d\n", firstnumber);
    
    int secondnumber = firstnumber; 
    printf ( "The second Number = %d\n", secondnumber) ;
    
    return 0;
}


// declaring multiple variable at once 
char name[20] = "Kazi", city[20] = "Pokhara";

/*
Question Here now in C Programming 
can you guess the output of this program

*/
#include <stdio.h>
int main (){
    int number1 = 33; 
    printf("%d ", number1);
    printf("%d", number1);
    return 0;
}
