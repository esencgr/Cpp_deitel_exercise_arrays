// Deitel array exercise -6.15-
#include <iostream>
#define SIZE 5
using namespace std;
int main() {

  int array[ SIZE ] = {0}, subscript = 0, number, temp;
  cout << "enter 5 number between 10-100 : " << endl;

  for (int i = 0; i < SIZE; i++){
      cin >> number;
      temp = 0;

      for (int j = 0; j < subscript; j++)
         if (number == array [j]){
             temp = 1;
             break;
         }
         if ( !temp )
            array [subscript++] = number ;
  }

  cout << "\nThe nonduplicate values are:\n";

        for (int k = 0; array [ k ] != 0; ++k )
            cout << array [ k ] << " ";

  cout << endl;

return 0;
}
