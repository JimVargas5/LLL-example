#include "cs162_list.h"

//These are the functions you will be writing
//Everything else has already been written for you!

//Constructor
list::list()
{
     //Step 3 - Implement the constructor here
    this -> head = NULL;
}


//Display all items in a linear linked list
void list::display_all()
{
     //Step 5 - Implement the display_all function here
     //
     node *current = head;
     
     if (!head)
         return;

     while(current -> next != NULL)
     {

         cout << current->data << endl;
         current = current->next;
     }
    cout << current->data << endl; 
    return;
}


//Count the number of times the first node's data appears
//in the list, and return that count.
int list::count_first()
{
     //Step 6 - Implement the count_first here
     //(remember to return the count!

    int saver = 0;
    node *current = head;
    int count = 0;

    if (!head)
        return count;
    saver = current->data;

    while (current->next != NULL)
    {
        if (current->data == saver)
            ++count;
        current = current->next;
    }
    if (current->data == saver)
        count++;

    return count;
}

//Display the LAST node's data
void list::display_last()
{
    //Step 7 - Place your code here
    //
    node *current = head;

    if (!head)
        return;

    while(current->next != NULL)
        current = current->next;
    //current = current->next;

    cout << "\nThe last one: " << current->data << endl;
    return;
}

//Return true if the last node's data appears
//in the list more than once.
bool list::find_last()
{
    bool checker = false;
    bool keepGoing = true;
    node *current = head;
    int countLast = 0;

    if (!head)
        return checker;

    while (current->next != NULL)
        current = current->next;
    int last = current->data;
    current = head;
    while(keepGoing)
    {
        if (current->data == last)
        {
            ++countLast;
            keepGoing = false;
        }
        if (current->next != NULL)
            current = current->next;
        else
            keepGoing = false;
        
    }
    if (countLast < 1)
        checker = true;

    return checker;
}









