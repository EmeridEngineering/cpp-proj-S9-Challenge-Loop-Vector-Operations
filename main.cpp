// Section 9
// Challenge
/*    
    This challenge is about using a collection (list) of integers and allowing the user
    to select options from a menu to perform operations on the list.
    
    Your program should display a menu options to the user as follows:
    
    P - Print numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest number
    Q - Quit

    Enter your choice:
    
The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be
displayed again.


If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
If the list is empty you should display "[] - the list is empty"
If the list is not empty then all the list element should be displayed inside square brackets separated by a space. 
For example, [ 1 2 3 4 5 ]
      
If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list 
which you will add to the list and then display it was added. For example, if the user enters 5
You should display, "5 added".
Duplicate list entries are OK

If the user enters 'M' or 'm'  you should calculate the mean or average of the elements in the list and display it.
If the list is empty you should display, "Unable to calculate the mean - no data"

If the user enters 'S' or 's' you should display the smallest element in the list.
For example, if the list contains [2 4 5 1],  you should display, "The smallest number is 1"
If the list is empty you should display, "Unable to determine the smallest number - list is empty"

If the user enters 'L' or 'l' you should display the largest element in the list
For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
If the list is empty you should display, "Unable to determine the largest number - list is empty"

If the user enters 'Q' or 'q' then you should display 'Goodbye" and the program should terminate.

Before you begin. Write out the steps you need to take and decide in what order they should be done.
Think about what loops you should use as well as what you will use for your selection logic.

This exercise can be challenging! It may likely take a few attempts before you complete it -- that's OK!

Finally, be sure to test your program as you go and at the end.

Hint: Use a vector!

Additional functionality if you wish to extend this program.

- search for a number in the list and if found display the number of times it occurs in the list
- clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
- don't allow duplicate entries
- come up with your own ideas!

Good luck!

*/
#include <iostream>
#include <vector>

int main() {
    
    std::vector<int> list {};
    char prompt {};
    do {
        std::cout << "---------------------" << std::endl
            << "Command list: " << std::endl
            << "P - Print numbers" << std::endl
            << "A - Add a number" << std::endl
            << "M - Display mean of the numbers" << std::endl
            << "S - Display the smallest number" << std::endl
            << "L - Display the largest number" << std::endl
            << "Q - Quit" << std::endl
            << "\nSelect a command: ";
        std::cin >> prompt;

        switch (prompt){
            case 'p': //intentional to achieve p OR P
            case 'P':
                std::cout << "p" << std::endl;
                // case p or P - print
                // if list != empty then do the logic
                // display square bracket at the begining and the end
                // use range-base for loop to iterate through list elements and display them separated by spaces
                // else display the message
                break;
            case 'a': 
            case 'A':
                std::cout << "a" << std::endl;
                // case a or A - add
                // declare the int variable and prompt the user for a number
                // read the consol input to the variable
                // pushback() the new number to the list
                // Display the message
                break;
            case 'm': 
            case 'M':
                std::cout << "m" << std::endl;
                // case m or M - mean
                // if list != empty then do the logic
                // declare floating point running sume and average
                // use range-based for to get the running sum of the list (double) and then dive by the size() (size_t) of the list - will return (double)
                // else display the message
                break;
            case 's': 
            case 'S':
                std::cout << "s" << std::endl;
                // case s or S - smallest
                // if list != empty then do the logic
                // either use conditional operator to get smaller number while iterating range-base for loop
                    // or use predefined method 
                // Display the smallest number
                // else display the message
                break;
            case 'l': 
            case 'L':
                std::cout << "l" << std::endl;
                // case l or L - largest
                // Similar to above
                break;
            case 'q': 
            case 'Q':
                std::cout << "q" << std::endl;
                // case q or Q - quit
                // display message
                break;
            default:
                std::cout << "Unknown selection, please try again" << std::endl;
        }

    } while (prompt != 'q' and prompt != 'Q');
    
    std::cout << std::endl;
    return 0;
}