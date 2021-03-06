/* 
 * Assignment: 
 * Create a new branch titled '{first_name}'s_function'.
 * Create a new class titled with your first name. e.g. 'Christian.cpp' and 'Christian.hpp'
 * In the .hpp, include the String class and create the following variable: 'private static const std::string name;'
 * Also in the .hpp, create a public void function 'displayName()'
 * In the .cpp, assign a string literal containing your first name to the 'name' variable, and write the body of the 'displayName()' function.
 * Modify 'main.cpp' to include your .hpp file, and invoke the 'displayName()' function.
 * Push & commit this change to your branch.
 */
#include "Tyler.h"
#include "Christian.h"
#include "Kevin.h"

int main(){
	Christian::displayName();
    Kevin::displayName();
	Tyler::displayName();
}