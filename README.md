# Library Database Management System

## Contributers

- Abhishek Varghese (Back End)
- Shivam Pandey (Front End - GUI)
- Piyush Doke (Front End - GUI)

## Guide

- Prof. Abhiram G. Ranade (Department of Computer Science, IIT Bombay)

## Aim

This software was developed from the point of view of digitizing the library of our institution. Keeping record of hundreds of books issued to several students is a hectic job when done manually on a register. Hence, we developed a stand-alone software application which will serve as a DBMS for our institution's library.

## Data Structures

1. **LibObj** : A single record containing -  *Roll number, book number, return date, etc.*
1. **Libhash** : A hash table to store *LibObj* records. Equipped with all kinds of functions to add objects, remove objects, extract and update an object.
1. **LibobjFileIO** : A data structure created using string stream, that reads records from spreadsheet and converts it into desired *LibObj*.
1. **StudentFileIO** : A data structure created using string stream, that reads student records from spreadsheets.
1. **BookFileIO** : A data structure created using string stream, that reads book records from spreadsheets.

## Technology/Tools

- C++
- Qt Creator (cross-platform toolkit for developing GUI applications)
## Working

* Upon opening the application, all data is read from their respective excel sheets and is put into the hash table. It includes all the *unreturned books, books data and students data.*
* When a book is issued, new data is added into the hash table.
* when a book is returned, old data is removed from hash table and is dumped into permanent records.
* While closing the application, temperory data is stored in a file, whcih is to be recovered the next time the application runs.
