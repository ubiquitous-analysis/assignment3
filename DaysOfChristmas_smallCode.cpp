void DaysOfChristmas_smallCode ( void )
{
   cout << "The 12 Days of Christmas\n";
   for ( int i = 1; i < 13; i++){
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
            cout << "2 Turtle Doves\nand ";
         default:
            cout << "a Partridge in a Pear Tree\n";
         
      }
   }

   return ;

}


