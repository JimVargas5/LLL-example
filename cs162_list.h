<<<<<<< HEAD
#include <iostream>
using namespace std;

bool again();


//The data structure is a linear linked list of integer data
struct node
{
       int data;
       node * next;
};

//Manage a collection of data using a linear linked list 
class list
{
    public:

	//These are the functions that you will be implementing!
        void insert(int to_add); //Step #4 - Insert at beginning
        void append(int to_add); //Step #5 - Append at the end
        int count_and_insert();		 //Step #6 - Count the # of nodes
        void remove_last(); 	 //Step #7 - Remove the last node
        ~list();    		 //Step #8 - deallocate all dynamic memory
   	void copy_last();	 //Challenge


        //**********************************************************
	//These functions have already been implemented (for you): 
        list();             //constructor - initializes data members
        void display_all(); //display all items
	void build();	    //build a LLL from the user

    private:
        node * head;                 //The head of a linear linked list
        
};
=======
//H
//eader comments with my name and purpose of the info in this file.   
#include <iostream>
using namespace std;

bool again(); //This function is provided for you

//Let's begin with linear linked lists by having a list of integer data
struct node
{
       int data;
       node * next;
};

/*
The public section can be used by any object. 
Usually member functions are public while data
members are private. 

Member functions describe what a class does! 
Data describes what a class is.  */
class list
{
    public:
    // YOU will be implementing these for Lab #7 
        list();                //Constructor - initializes data members
        void display_all();    //Display all data within the LLL
        int count_first();     //Count how many times the first itemp appears
        void display_last();
        bool find_last();      //Find if the last node's data duplicated?


    //***************************************************************
    // THESE FUNCTIONS Have already been implemented for you 
        ~list();              //Destructor - deallocates all dynamic memory
        void build();         //Inserts data into the LLL from the user
    private:
        node * head;          //The head of a linear linked list
        
};
>>>>>>> 76d2e8b55dbc4d10ca547423dedaeac611c9a7ca
