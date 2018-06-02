#include "cs162_list.h"
using namespace std;
//Start in Step 3 by uncommenting out the code to create 
//a list object and build it!

int main()
{
    //Create an object of class list
    list my_list;

    //Call the build function to create a Linear Linked List
    //(The build member function has already been written)
    my_list.build();


    //Place your code here to call the functions for Lab #7
    my_list.display_all();

    cout << "\nCount of first guy: " << my_list.count_first() << endl;
    my_list.display_last();

    if (my_list.find_last())
        cout << "\nThe last one showed up multiple times.\n";

    return 0;
}
