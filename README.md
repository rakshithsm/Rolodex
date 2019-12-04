# sysfunhw2

The purpose of the rolo program is to serve as a computer version of the "rolodex" card files that were popular in an office setting for maintaining
information about business contacts.

In the default mode of execution (which occurs when you invoke the program just using bin/rolo with no arguments), the program reads in the file
.rolodex.dat from the user's home directory, creating an empty file if it is not present, and then enters a menu-driven, textual interaction that
allows the user to scan, search, and make updates to the data. A file .rolodexdata.lock is used to inform other instances of the rolo
program that might potentially be run that the rolodex data file is currently in use and modifications should not be attempted.  When the program exits,
any changes made to the data are first written to a temporary file, and then some renaming is performed to rename the original .rolodex.dat file to .rolodex~
(to serve as a backup file) and to rename the temporary file to .rolodex.dat (to serve as the new version).
Some modes of execution of the program do not have the ability to modify the data -- in that case no changes are made to any files when the program exits.

This was a part of the System Fundamentals Coursework at Stony Brook University's CSE320 by Prof. Eugene Stark
