# include<stdio.h>
//for sum
int main() {
int a, b, c, d;
printf("enter a:");
scanf("%d",&a);
printf("enter b:");
scanf("%d", &b);
int sum = a + b;
printf("sum is : %d \n", sum);




//for product
printf("enter c:");
scanf("%d" , &c);
printf("enter d:");
scanf("%d" , &d);
int product = c * d;
printf("Product is :%d", product );





//To calculate area of square
int main() {
    int side;
  printf("enter side:");
  scanf("%d", &side);
  printf("Area is : %d", side * side);




//To calculate area of a circle (side is given)
int main(){
  float radius;
  printf("enter radius:");
  scanf("%f", &radius);
  printf("Area of a circle is: %f", 3.14 * radius * radius);





   //OPERATORS 
   #include<math.h> // if you have to use power etc ...
  int main() {
   int a, b ;
   a = b = 2;
   int c = a + b ;
   int power = pow(a , b);
   printf("%d \n", power );




   //MODULAR OPERATOR %
   printf("%d\n", 8%3);
 



   //Relational Operator ==(equal to)     >,>=(greater than equal to)     <,<=(less than equal to)    != (not equal to sign)
   printf("%d\n", a == b); //if 1 then true if 0 then false..  
   printf("%d \n", 2 == 3);




   
   //Logical Operator  && AND  
   printf("%d \n", 4>2 && 3>2);
   
  


  //Write a program to check if a number is divisible by 2 or not.
  #include<math.h>
  int main(){
    int x;
    printf("Enter a number:");
    scanf("%d", &x);
    printf("%d \n", x % 2 == 0);


  //WAP to check if a number is odd or even.
  // even -> 1
  // odd -> 0
    int y;
    printf("Enter a number:");
    scanf("%d", &y);
    printf("%d \n", y % 2 == 0);
 
   
   
  // Practice Qs 8
  //     Print 1 (true) or O(false) for following statement.
  //     a. if it's sunday & it's snowing -> true
  //     b. if it's monday or it's raining -> true
  //     c. if a number is greater than 9 & less than 100 (2 digit number) -> true
  
  
   int main(){
   int isSunday = 1;
   int isSnowing = 0;
   printf("%d \n", isSunday && isSnowing);
 

   int isMonday = 1;
   int isRaining = 1;
   printf("%d \n", isMonday || isRaining);// OR Operator ( || )

  
   int x;
   printf("Enter a number:");
   scanf("%d", &x);
   printf("%d \n", x>9 && x<100);
  
   


   //Conditional statement 

   //IF or ELSE statement...
  //int main(){
  //   int age;
  //   printf("Enter your age :");
  //   scanf("%d", &age);

  //   if(age >= 18){
  //     printf("adult!! \n");
  //     printf("You can vote!!!! \n");
  //   }

  //   else if (age <= -1)
  //   {
  //     printf("Invalid age!!! \n");
  //   }
    
   
  //   else{
  //     printf("not adult!! \n");
  //   }
  //  printf("Thank You!!!");

  //  //Ternary  
  //  int marks;
  //  printf("Enter your marks:");
  //  scanf("%d", &marks);
  //  marks >= 30 ? printf("Pass \n") : printf("Fail \n");
  
   

  //  //Switch
  //  int day;
  //  printf("Enter day (1-7) :");
  //  scanf("%d", &day);

  //  switch (day) {
  //   case 1: printf("Sunday");
  //           break;
  //   case 2: printf("Monday");
  //           break;
  //   case 3: printf("Tuesday");
  //           break;
  //   case 4: printf("Wednesday");
  //           break;                 
  //   case 5: printf("Thursday");
  //           break;
  //   case 6: printf("Friday");
  //           break;   
  //   case 7: printf("Saturday");
  //           break;   
  //   default :printf("Not a valid day!!!");                   
   

//   Practice Qs 10
// Write a Program to give grades to a student
// marks < 30 is C
// 30 <= marks < 70 is B
// 70 <= marks < 90 is A
// 90 <=
// marks <= 100 is A+


// int main(){
//   int marks;
//   printf("Enter marks:");
//   scanf("%d", &marks);
  
//   if (marks < 30){
//     printf("C \n");

//   }
//   else if (marks >= 30 && marks < 70){
//     printf("A \n");
//     printf("Congratulations!!!");

//   }
//   else if (marks >= 70 && marks < 101){
//     printf("A+ \n");\
//     printf("Congratulations!!!");

//   }
//   else{
//     printf("Invalid marks! \n");
//   }

//  int main() {
//    char ch;
//    printf("enter character :" );
//    scanf("%c", &ch);

//   if (ch >= 'a' && ch <= 'z' ) {
//   printf("lower case \n");
//   }

//   else if (ch >= 'A' && ch <= 'Z') {
//   printf("upper case \n");   
//   }

//   else{
//     printf("Invalid character!!! \n");
//   }


//FOR LOOP

// int main() {
//   for(int i = 1; i <= 10; i = i + 1){
//     printf("Hello World !!! \n");
//   }
  

// for(int i = 1; i <= 10; i = i + 1){    //to increase number 
//   printf("%d \n" , i);
// }


// for(int i = 10; i >= 1; i = i - 1){     //to decrease number 
//   printf("%d \n" , i);
// }

//Print the numbers from 0 to 10

// int main() {
//   for(int i = 0; i < 11; i++) {     //you can write i++ for i = i+1  or i += 1      only applicable for i + 1
//     printf("%d \n", i);             //increment operator
//                                     // i++ (Post increment operator)   use value then increase by 1
//                                    // ++i (Pre increment operator )   first incresase then use value 
//  }    
  

//WHILE LOOP
// int main() {
// int i = 1;
// while (i<=5)
// {
//   printf("Hello World!! \n");
//   i++;
// }


//DO WHILE LOOP


//Print the numbers form 0 to n if n is given by user

// int main() {

// int n;
//   printf("Enter a number :");   //While loop
//   scanf("%d", &n);

// int i=1;
// while(i<= n) {
//   printf("%d \n", i);
//   i++;
// }



// int n;
// printf("Enter a number:");
// scanf("%d", &n);

// for(int i = 1; i <= n; i++) {   // for loop
//   printf("%d \n", i);
// }



//DO WHILE LOOP

// int main() {
//   int i = 1;
//   do {
//     printf("%d \n", i);
//     i++;
//   }while (i < 1);


 //Print the sum of first n natural numbers & also print them in reverse..

// int main() {
//   int n;
//     printf("Enter number:");
//     scanf("%d", &n);

//    int sum = 0;
//    for(int i = 1; i<=n; i++) {
//       sum = sum + i;
//    }
//    printf("Sum is : %d", sum);

//    for(int i = n; i>=1; i--) {
//     printf("%d \n", i);
//    }

   //Print the table of a number enter by user...

  //  int main() {
  //   int n;
  // printf("Enter a number :");
  // scanf("%d", &n);

  // for(int i = 1; i<=10; i++) {
  //   printf("%d \n", n*i);
  // }   

 //Keep taking numbers as input from user until user enters an odd number.

//  int main() {
//   int n;   // do while loop is suitable ..
//    do {
//     printf("Enter a number :");
//     scanf("%d", &n);

//     if(n % 2 != 0) {    // if n ko remainder is not equal to 0   then  it is odd no..
//       break;
//     }
//    } while(1);     //1 represents true and 0 represents false.
//    printf("Thank You!!!\n");

//Keep takingnumbers as input from user until user enters a number which is multiple of 7.

int main() {
  int n;
  do {
    printf("Enter a number :");
    scanf("%d", &n);
    printf("%d\n", n);

    if(n % 7 == 0); {
      break;
    }
  }while(1);
  printf("Thank You!!");

  return 0; 
 } 





