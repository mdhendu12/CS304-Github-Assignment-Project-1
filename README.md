# C++ Date Class Assignment
## Description
The goal of this assignment was to learn how to create classes and objects in the C++ programming language. The output shows three different formats for a given date.

Below is an example output from the main method, which makes use of three different functions that display a date in different formats.
```
8/27/1998
June 9, 2020
9 June 2020
```

## Under the Hood
The code running this program is surpringly dense considering the short length of the output. Nearly 200 lines of code long.

The 'Date' class is defined near the top. Under private are declared variables for the month, day, and year. A string array called names is also declared to hold the names of the months. Lastly, a private function called `setnames()` with a void return type is setup.

Two constructors are used for the 'Date' class. The default constructor, with no arguments, simply calls the `setNames` method, which populates the `name` array with all month names. The other is an overloaded constructor that takes a month, day, and year as parameters. This constructor calls mutator functions for each of the parameters, thereby storing the arguments into the object.

* For each of the mutator classes, there is some input validation that checks if the user enters correct information for the date. If their input is not correct, the program tells them this and terminates. (For example, if someone were to input '13' as the month, this would not be acceptable.)
  * *User input from the console is not actually inplemented in this assignment, but if it were added, then the user input validation would work.*

Finally, there are three functions to show the date in each of the different formats. The same data for month, day, and year can be represented in three ways.

At the bottom of the code file is the main method, which creates a date object, changes its values to another date, and displays the date in all three formats. The program ends with a `return 0`, denoting successful compilation of the program.


## What I Learned
This was one of the last assignments I had at the end of my CIS 251 class at Gadsden State Community College. In this assignment I learned how to make use of object-oriented-programming principles in C++. I learned how to set up a class definition and declare private and public members. I made use of both the default and overloaded constructor. I learned to write functions. This class introduced me to the OOP paradigm, which I had no experience with prior.

Another thing that I learned from the class that I didn't expect at the time was the abiility to teach myself the class materials. My professor for this class did little in the way of teaching. Other than reading off of Powerpoints, she for the most part left students to their own devices to figure out how to tackle challenging programming assignments. So, one major takeaway from this class is that I learned how to be more self-sufficient, and teach myself how to code in this fairly complex programming language.
