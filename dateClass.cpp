{\rtf1\ansi\ansicpg1252\deff0\nouicompat\deflang1033{\fonttbl{\f0\fmodern\fprq1\fcharset0 Consolas;}{\f1\fswiss\fprq2\fcharset0 Calibri;}{\f2\fnil\fcharset0 Calibri;}}
{\colortbl ;\red0\green128\blue0;\red0\green0\blue0;\red128\green128\blue128;\red163\green21\blue21;\red0\green0\blue255;\red43\green145\blue175;\red0\green128\blue128;\red111\green0\blue138;}
{\*\generator Riched20 10.0.19041}\viewkind4\uc1 
\pard\widctlpar\cf1\f0\fs19 // Chapter 13, Programming Challenge 1: Date Class\cf2\par
\cf3 #include\cf2  \cf4 <iostream>\cf2\par
\cf3 #include\cf2  \cf4 <string>\cf2\par
\cf5 using\cf2  \cf5 namespace\cf2  std;\par
\par
\cf1 // Constants\cf2\par
\cf5 const\cf2  \cf5 int\cf2  NUM_MONTHS = 12;\par
\par
\cf1 // Declaration of the Date class\cf2\par
\par
\cf5 class\cf2  \cf6 Date\cf2\par
\{\par
\cf5 private\cf2 :\par
    \cf5 int\cf2  month;  \cf1 // To hold the month\cf2\par
    \cf5 int\cf2  day;    \cf1 // To hold the day\cf2\par
    \cf5 int\cf2  year;   \cf1 // To hold the year\cf2\par
\par
    \cf1 // An array of char arrays to hold\cf2\par
    \cf1 // the names of the months\cf2\par
    \cf6 string\cf2  names[NUM_MONTHS];\par
\par
    \cf1 // Private member function to assign\cf2\par
    \cf1 // the month names to the names array\cf2\par
    \cf5 void\cf2  setNames();\par
\par
\cf5 public\cf2 :\par
    \cf1 // Constructors\cf2\par
    Date();\par
    Date(\cf5 int\cf2 , \cf5 int\cf2 , \cf5 int\cf2 );\par
\par
    \cf1 // Mutators\cf2\par
    \cf5 void\cf2  setMonth(\cf5 int\cf2  \cf3 m\cf2 );\par
    \cf5 void\cf2  setDay(\cf5 int\cf2  \cf3 d\cf2 );\par
    \cf5 void\cf2  setYear(\cf5 int\cf2  \cf3 y\cf2 );\par
\par
    \cf1 // Functions to print the date\cf2\par
    \cf5 void\cf2  showDate1();\par
    \cf5 void\cf2  showDate2();\par
    \cf5 void\cf2  showDate3();\par
\};\par
\par
\cf1 //**********************************\cf2\par
\cf1 // Default constructor             *\cf2\par
\cf1 //**********************************\cf2\par
\par
\cf6 Date\cf2 ::Date()\par
\{\par
    setNames();\par
\}\par
\par
\cf1 //**********************************\cf2\par
\cf1 // Overloaded constructor          *\cf2\par
\cf1 // Parameters: m is the month      *\cf2\par
\cf1 //             d is the day        *\cf2\par
\cf1 //             y is the year       *\cf2\par
\cf1 //**********************************\cf2\par
\par
\cf6 Date\cf2 ::Date(\cf5 int\cf2  \cf3 m\cf2 , \cf5 int\cf2  \cf3 d\cf2 , \cf5 int\cf2  \cf3 y\cf2 )\par
\{\par
    setMonth(\cf3 m\cf2 );\par
    setDay(\cf3 d\cf2 );\par
    setYear(\cf3 y\cf2 );\par
    setNames();\par
\}\par
\par
\cf1 //**********************************\cf2\par
\cf1 // Member function setNames        *\cf2\par
\cf1 // This function assigns the names *\cf2\par
\cf1 // of the months to the names      *\cf2\par
\cf1 // array.                          *\cf2\par
\cf1 //**********************************\cf2\par
\par
\cf5 void\cf2  \cf6 Date\cf2 ::setNames()\par
\{\par
    names[0] \cf7 =\cf2  \cf4 "January"\cf2 ;\par
    names[1] \cf7 =\cf2  \cf4 "Febraury"\cf2 ;\par
    names[2] \cf7 =\cf2  \cf4 "March"\cf2 ;\par
    names[3] \cf7 =\cf2  \cf4 "April"\cf2 ;\par
    names[4] \cf7 =\cf2  \cf4 "May"\cf2 ;\par
    names[5] \cf7 =\cf2  \cf4 "June"\cf2 ;\par
    names[6] \cf7 =\cf2  \cf4 "July"\cf2 ;\par
    names[7] \cf7 =\cf2  \cf4 "August"\cf2 ;\par
    names[8] \cf7 =\cf2  \cf4 "September"\cf2 ;\par
    names[9] \cf7 =\cf2  \cf4 "October"\cf2 ;\par
    names[10] \cf7 =\cf2  \cf4 "November"\cf2 ;\par
    names[11] \cf7 =\cf2  \cf4 "December"\cf2 ;\par
\}\par
\par
\cf1 //**********************************\cf2\par
\cf1 // Member function setMonth        *\cf2\par
\cf1 //**********************************\cf2\par
\par
\cf5 void\cf2  \cf6 Date\cf2 ::setMonth(\cf5 int\cf2  \cf3 m\cf2 )\par
\{\par
    \cf5 if\cf2  (\cf3 m\cf2  >= 1 && \cf3 m\cf2  <= 12)\par
        month = \cf3 m\cf2 ;\par
    \cf5 else\cf2\par
    \{\par
        cout \cf7 <<\cf2  \cf3 m\cf2  \cf7 <<\cf2  \cf4 " is not a valid "\cf2\par
            \cf7 <<\cf2  \cf4 "value for the month.\\n"\cf2 ;\par
        exit(\cf8 EXIT_FAILURE\cf2 );\par
    \}\par
\}\par
\par
\cf1 //**********************************\cf2\par
\cf1 // Member function setDay          *\cf2\par
\cf1 //**********************************\cf2\par
\par
\cf5 void\cf2  \cf6 Date\cf2 ::setDay(\cf5 int\cf2  \cf3 d\cf2 )\par
\{\par
    \cf5 if\cf2  (\cf3 d\cf2  >= 1 && \cf3 d\cf2  <= 31)\par
        day = \cf3 d\cf2 ;\par
    \cf5 else\cf2\par
    \{\par
        cout \cf7 <<\cf2  \cf3 d\cf2  \cf7 <<\cf2  \cf4 " is not a valid "\cf2\par
            \cf7 <<\cf2  \cf4 "value for the day.\\n"\cf2 ;\par
        exit(\cf8 EXIT_FAILURE\cf2 );\par
    \}\par
\}\par
\par
\cf1 //**********************************\cf2\par
\cf1 // Member function setYear         *\cf2\par
\cf1 //**********************************\cf2\par
\par
\cf5 void\cf2  \cf6 Date\cf2 ::setYear(\cf5 int\cf2  \cf3 y\cf2 )\par
\{\par
    year = \cf3 y\cf2 ;\par
\}\par
\par
\cf1 //**********************************\cf2\par
\cf1 // Member function showDate1       *\cf2\par
\cf1 // Displays the date in the form   *\cf2\par
\cf1 // MM/DD/YY                        *\cf2\par
\cf1 // Example: 12/25/2014             *\cf2\par
\cf1 //**********************************\cf2\par
\par
\cf5 void\cf2  \cf6 Date\cf2 ::showDate1()\par
\{\par
    cout \cf7 <<\cf2  month \cf7 <<\cf2  \cf4 "/"\cf2\par
        \cf7 <<\cf2  day \cf7 <<\cf2  \cf4 "/"\cf2\par
        \cf7 <<\cf2  year \cf7 <<\cf2  endl;\par
\}\par
\par
\cf1 //*************************************\cf2\par
\cf1 // Member function showDate2          *\cf2\par
\cf1 // Displays the date in the following *\cf2\par
\cf1 // form: December 25, 2014            *\cf2\par
\cf1 //*************************************\cf2\par
\par
\cf5 void\cf2  \cf6 Date\cf2 ::showDate2()\par
\{\par
    cout \cf7 <<\cf2  names[month - 1]\par
        \cf7 <<\cf2  \cf4 " "\cf2  \cf7 <<\cf2  day \cf7 <<\cf2  \cf4 ", "\cf2\par
        \cf7 <<\cf2  year \cf7 <<\cf2  endl;\par
\}\par
\par
\cf1 //*************************************\cf2\par
\cf1 // Member function showDate3          *\cf2\par
\cf1 // Displays the date in the following *\cf2\par
\cf1 // form: 25 December, 2014            *\cf2\par
\cf1 //*************************************\cf2\par
\par
\cf5 void\cf2  \cf6 Date\cf2 ::showDate3()\par
\{\par
    cout \cf7 <<\cf2  day \cf7 <<\cf2  \cf4 " "\cf2\par
        \cf7 <<\cf2  names[month - 1]\par
        \cf7 <<\cf2  \cf4 " "\cf2  \cf7 <<\cf2  year \cf7 <<\cf2  endl;\par
\}\par
\par
\par
\cf1 //*************************************\cf2\par
\cf1 // Function main                      *\cf2\par
\cf1 //*************************************\cf2\par
\par
\cf5 int\cf2  main()\par
\{\par
    \cf1 // Create a Date object and initialize it\cf2\par
    \cf1 // using the overloaded constructor.\cf2\par
    \cf6 Date\cf2  date(8, 27, 1998);\par
\par
    \cf1 // Show the date in form #1.\cf2\par
    date.showDate1();\par
\par
    \cf1 // Store a new month, day, and year\cf2\par
    \cf1 // in the object.\cf2\par
    date.setMonth(6);\par
    date.setDay(9);\par
    date.setYear(2020);\par
\par
    \cf1 // Show the date in form #2.\cf2\par
    date.showDate2();\par
\par
    \cf1 // Show the date in form #3.\cf2\par
    date.showDate3();\par
\par
    \cf5 return\cf2  0;\par

\pard\widctlpar\sa160\sl252\slmult1\}\cf0\f1\fs22\par

\pard\sa200\sl276\slmult1\f2\lang9\par
}
 