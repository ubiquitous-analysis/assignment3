/******************************************************************************
;@
;@ Student Name 1: Nathan Boersma
;@ Student 1 #: 301591227
;@ Student 1 userid (email):  njb14@sfu.ca

;@ Below, edit to list any people who helped you with the code in this file and also DaysOfChristmas_smallCode.cpp,
;@      or put ‘none’ if nobody helped (the two of) you.
;@
;@ Helpers: none
;@
;@ Also, reference resources beyond the course textbook and the course pages on Canvas
;@ that you used in making your submission (including both .cpp files).
;@
;@ Resources: none
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
   for (unsigned long long day_number {1}; day_number<= 12; day_number++){
      cout << "\nOn the " << day_number;
      switch (day_number){
         //This switch statement prints the ending of the number, 
         //since it changes for each of the first few verses
      
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
      //This switch statement adds the lyrics for each day
      //Since day 1 is at the bottom, as the day gets higher, the
      //statements fall through and each of the previous days is also output
      switch ( day_number )
      {
         case 12:
            cout << "12 Drummers Drumming\n";
            [[fallthrough]];
            //fallthrough attributes prevent the compiler from returning a warning
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
