/******************************************************************************
;@
;@ Student Name 1: student1
;@ Student 1 #: 123456781
;@ Student 1 userid (email): stu1 (stu1@sfu.ca)
;@
;@ Student Name 2: student2
;@ Student 2 #: 123456782
;@ Student 2 userid (email): stu2 (stu2@sfu.ca)
;@
;@ Below, edit to list any people who helped you with the code in this file and also DaysOfChristmas_smallCode.cpp,
;@      or put ‘none’ if nobody helped (the two of) you.
;@
;@ Helpers: _everybody helped us/me with the assignment (list names or put ‘none’)__
;@
;@ Also, reference resources beyond the course textbook and the course pages on Canvas
;@ that you used in making your submission (including both .cpp files).
;@
;@ Resources:  ___________
;@
;@% Instructions:
;@ * Put your name(s), student number(s), userid(s) in the above section.
;@ * Edit the "Helpers" line and "Resources" line.
;@ * Your group name should be "A3_<userid1>_<userid2>" (eg. A2_stu1_stu2)
;@ * Form groups as described at:  https://coursys.sfu.ca/docs/students
;@ * Submit your file to coursys.sfu.ca
;@
;@ Name        : fibonacci.cpp
;@ Code        : 1237
******************************************************************************/

#include <iostream>
using namespace std;
void DaysOfChristmas_switch ( void )
{
   // This function must output to standard output the lyrics for "The 12 Days of Christmas".
   // To get a good grade the lyrics must exactly match the lyrics in the file "The 12 Days of Christmas.txt"
   // You must use a non-trivial switch statement in your code.

   // remove the line below.
   

   cout << "<The 12 Days of Christmas>" << endl;
   for (unsigned long long i{0}; i<= 12; i++){
      cout << fmt::format("On the {}{} day of Christmas/nmy true love sent to me:")
      switch ( i )
      {
         case 12:
            cout << "12 Drummers Drumming\n";
         case 11:
            cout << "11 Pipers Piping\n";
         case 10:
            cout << "10 Lords a Leaping\n";
         case 9:
            cout << "9 Ladies Dancing\n";
         case 8:
            cout << "8 Maids a Milking\n";
         case 7:
            cout << "7 Swans a Swimming\n";
         case 6:
            cout << "6 Geese a Laying\n";
         case 5:
            cout << "5 Golden Rings\n";
         case 4:
            cout << "4 Calling Birds\n";
         case 3:
            cout << "3 French Hens\n";
         case 2:
            cout << "2 Turtle Doves\nand";
         default:
            cout << "a Partrige in a Pear Tree";
         
      }; //Use a non-trivial switch statement in your code.
   }

   return ;

}