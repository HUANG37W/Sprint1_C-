# Overview for Sprint 1

### Task: Upgrade the bank system to handle more than one account.

### Purpose: Learn how to use the Standard Template Library and iterators.

As you write your program code, you will separate your code into different files. You will create header files and cpp source files for each class. You will place the class declaration in a header file, and your class method implementations will go in a cpp source file. Your main function will go in yet another cpp source file. All of your cpp source files will include your header files as needed.

### Part 1.
Add the ability to store more than one account to your bank program using the list container from the Standard Template Library.

### Part 2.
Change the "Display account information" menu option to show all account information instead of just one account. When this option is selected, all of the stored accounts are shown. Use iterators to implement this option.

### Part 3.
Add the ability to search through the container of accounts for a specific account and display the information associated with the account. Use iterators to find the account. If the account doesn't exist in the list, then display an appropriate error message. You should create a function that finds the desired account because you can reuse it later. This function should return an iterator. The section in the reading called "Returning Container Values from Functions" under "Iterators" will be helpful for this part of the task.

### Part 4.
Fix the deposit and withdrawal options to work on any of the accounts in the system. First call the function you wrote for Part 3 of this task to find the desired account. After obtaining the iterator for the desired element in the container, dereference that iterator to apply the deposit or withdraw methods for that account. Alternatively, you can use the += or -= operators directly to the object in the container if you created these operators in the task last week. You must use iterators to find and modify the account. The section in the documentation called "Returning Container Values from Functions" under "Iterators" will be helpful for this part of the task.
{Provide a link to your YouTube demonstration.  It should be a 4-5 minute demo of the software running and a walk through of the code.  Focus should be on sharing what you learned about the language syntax.}

[Software Demo Video 1](https://cdnapisec.kaltura.com/index.php/extwidget/preview/partner_id/1157612/uiconf_id/42438192/entry_id/1_ixsty24i/embed/dynamic)
[Software Demo Video 2](https://cdnapisec.kaltura.com/index.php/extwidget/preview/partner_id/1157612/uiconf_id/42438192/entry_id/1_k1xjoexu/embed/dynamic)


# Development Environment

## Tools: 
Install Visual Studio (Free Community Version). This is a different tool from Visual Studio Code. Visual Studio includes C++ tools.

## Programming language:
This bank system uses C++ programming language. Write one or more programs in C++ that demonstrates the following:

*Variables

*Expressions

*Conditionals

*Loops

*Functions

*Classes

*Data structure from STL (such as a vector, list, or map)

### Stretch Challenges (select one):

* Modify your program to demonstrates inheritance with virtual functions.

# Useful Websites

* [W3 schools](https://www.w3schools.com/cpp/)
* [LearnCpp](https://www.learncpp.com/)

# Future Work

{Make a list of things that you need to fix, improve, and add in the future.}
* Enter Name, Account number, Account type to be shown during transactions.
* Shows the information about the person who is doing the transaction.
* Enter amount to deposited in the account.
* Shows the Balance in the account.
* Enter amount to be withdrawn from the account, and then it shows available balance.
* Cancel the transaction.