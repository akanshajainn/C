// 3. Write a program to create a inventory program to accept product name, unit price and quantity and to display the details with actual value of N products using structure and function
#include <stdio.h>
#include <string.h>

struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};

/* function declaration */
void printBook( struct Books book );

int main() {

int i=0,count=0;
printf("enter number of items to be added\n");
scanf("%d",&count);
// Declaring count number of books

for (i = 1; i <= count; i++) {
  arr[i] = struct Books;
}
  //  struct Books b1;        /* Declare Book1 of type Book */
  //  struct Books b2;        /* Declare Book2 of type Book */
// for (i = 0; i <= count; i++) {
//   /* code */
// }
   /* book 1 specification */
   strcpy( b1.title, "C Programming");
   strcpy( b1.author, "Nuha Ali");
   strcpy( b1.subject, "C Programming Tutorial");
   b1.book_id = 6495407;

   /* book 2 specification */
   strcpy( b2.title, "Telecom Billing");
   strcpy( b2.author, "Zara Ali");
   strcpy( b2.subject, "Telecom Billing Tutorial");
   b2.book_id = 6495700;

   /* print Book1 info */
   printBook( b1 );

printf("\n" );
   /* Print Book2 info */
   printBook( b2 );

   return 0;
}

void printBook( struct Books book ) {

   printf( "Book title : %s\n", book.title);
   printf( "Book author : %s\n", book.author);
   printf( "Book subject : %s\n", book.subject);
   printf( "Book book_id : %d\n", book.book_id);
}

// #include "stdio.h"
//
// int main(int argc, char const *argv[]) {
//   struct products{
//     char name;
//     int price;
//     int quantity;
//   }
//
//   void printProduct(struct products product);
//
//
//   return 0;
// }
