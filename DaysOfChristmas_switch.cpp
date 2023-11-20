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
 void DaysOfChristmas_switch ( void ){

   cout << "The 12 Days of Christmas\n";
   for (unsigned long long i{1}; i<= 12; i++){
      cout << "\nOn the " << i;
      switch (i){
         case 1:
            cout << "st";
            break;
         case 2:
            cout << "nd";
            break;
         case 3:
            cout << "rd";
            break;
         default:
            cout << "th";
      }
      cout << " day of Christmas\nmy true love sent to me:\n";
      switch ( i )
      {
         case 12:
            cout << "12 Drummers Drumming\n";
            [[fallthrough]];
         case 11:
            cout << "11 Pipers Piping\n";
            [[fallthrough]];
         case 10:
            cout << "10 Lords a Leaping\n";
            [[fallthrough]];
         case 9:
            cout << "9 Ladies Dancing\n";
            [[fallthrough]];
         case 8:
            cout << "8 Maids a Milking\n";
            [[fallthrough]];
         case 7:
            cout << "7 Swans a Swimming\n";
            [[fallthrough]];
         case 6:
            cout << "6 Geese a Laying\n";
            [[fallthrough]];
         case 5:
            cout << "5 Golden Rings\n";
            [[fallthrough]];
         case 4:
            cout << "4 Calling Birds\n";
            [[fallthrough]];
         case 3:
            cout << "3 French Hens\n";
            [[fallthrough]];
         case 2:
            cout << "2 Turtle Doves\nand ";
            [[fallthrough]];
         default:
            cout << "a Partridge in a Pear Tree\n";
         
      }
   }

   return ;

}
