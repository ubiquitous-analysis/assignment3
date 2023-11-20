#include <string>
#include <iostream>
using namespace std;
int main(){
   std::string b;
   cout << "The 12 Days of Christmas\n";
   std::string i[] = {"","a Partridge in a Pear Tree\n","2 Turtle Doves\nand ","3 French Hens\n","4 Calling Birds\n"
   ,"5 Golden Rings\n","6 Geese a Laying\n","7 Swans a Swimming\n","8 Maids a Milking\n"
   ,"9 Ladies Dancing\n","10 Lords a Leaping\n","11 Pipers Piping\n","12 Drummers Drumming\n"};
   for (int j=1,k=0;j<13;++j){
         b = i[j]+b;
         if (k<4)
            k=j;
         std::string l[]{"","st","nd","rd","th"};
      cout << "\nOn the " << j << l[k] <<" day of Christmas\nmy true love sent to me:\n" << b;
   }

   return 0;
}