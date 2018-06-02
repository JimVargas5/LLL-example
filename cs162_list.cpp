#include "cs162_list.h"

<<<<<<< HEAD

//Implement the following functions for Lab #8

//Insert a node at the beginning of a linear linked list
void list::insert(int to_add)
{
	//Step #5 - Write the code here

}

//Count the number of nodes in the LLL, returning the result
//Add a new node to the front of the list
//with the count as the data member
int list::count_and_insert()
{
     	//Step #6 - Write the code here
        
}

//Append a node to the end of a linear linked list
void list::append(int to_add)
{
        //Step #7 - Write the code here

}


//Remove the last node from the list
void list::remove_last()
{
   	//Step #7 - Write the code here
}

//Deallocate all nodes (Destructor)
list::~list()
{
        //Step #8 - Write the code here
}

//Challenge - 
void list::copy_last()
{

}      
=======
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








>>>>>>> 76d2e8b55dbc4d10ca547423dedaeac611c9a7ca

