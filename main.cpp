#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  vector <vector <string> > wordGrid;
   /*
     do not edit this space

     where this comment is, the instructor will
     add the code that gets the user's input and
     inserts the input into every element of the
     matrix wordGrid
  */
  for(int i=0; i < wordGrid.size(); i++)
    {
        for(int x=0; x< wordGrid[0].size(); x++)
        {
            cout << "Row: " << i+1 << "  Column: " << x+1 << "  is: " << wordGrid[i][x] << endl;
        }
    }
  //PUT YOUR CODE BELOW THIS LINE
  //that prints each element of the matrix in the
  //following format:
  //Row _ Column _ is _
  //the first and second blanks should be replaced with the coordinates
  //of the element's row and column and the third blank should be replaced
  //with the value of that element

  



 return 0;
}




