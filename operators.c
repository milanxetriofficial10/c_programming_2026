// What is operators in c programming 
/*
In C programming, an operator is a special symbol that tells the computer
 to perform an action on one or more values (called operands).
*/

// simple defination 
//An operator is a symbol used to perform operations on variables and values.
// for example now 
/*
int a = 10;
int b = 20;
int sum = a + b ;
*/
// here 
/*
+ is a operators and 
a & b so are operands
*/

// Types of operators in c programming 
/*
1.Arithmetic Operators
Used for mathematical work.
+
-
*
/
%
for example now 
int x = 10 % 3; // result is 1

*/

/*
2. Relational Operators in c programming 
Used to compare values.
==
!=
<
>
<=
>=
for example 
a > b

*/

/*
3. Logical Operators
Used to make decisions.
&&
`
!
for example now 
if (a > 0 && b > 0)

*/

/*
4. Assignment Operators
Used to assign values.
=
+=
-=
for example 
a += 5;  // same as a = a + 5
*/

/*
Increment / Decrement Operators
++
--
for example 
a++;
*/

// The program parts in c progromming 
// 1.Arithmetic Operators

#include <stdio.h>
int main(){
    int x = 20;
    int y = 30;
    
    int result = x + y;   // - + * / %
    printf("the result = %d", result);
    return 0;
}

// 2. Relational Operators in c programming 


