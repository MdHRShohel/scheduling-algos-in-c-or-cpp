#include <iostream.h>

#include <ctime.h>

void gS(unsigned long *par); //function declaration

int main () {

   unsigned long sec;

   gS( &sec );

   // print the actual value

   cout << "Number of seconds :" << sec << endl;

   return 0;

}

void gS(unsigned long *par) { //function definition

   // get the current number of seconds

   *par = time( NULL );

}
