# Library Database Management System

## Contributers

- Abhishek Varghese (Back End)
- Shivam Pandey (Front End - GUI)
- Piyush Doke (Front End - GUI)

## Guide

- Prof. Abhiram G. Ranade (Department of Computer Science, IIT Bombay)

## Aim

This project was developed from the point of view of digitalizing the library of institutions. These days keeping records of thousands of books issued to tons of students is a hectic job when doing manually on a register. So, we have come up with a software which will serve as a DBMS for an institution's library.

## DataStructures

1. LibObj : A single record containing, the roll number, book number, return date, etc.
1. Libhash : A hash table to store LibObj records. Equipped with all kinds of functions to add objects, remove objects, extract and update an object.
1. LibobjFileIO : A datastructure created using string stream, that reads records from excel sheets and converts it into desired LibObj.
1. StudentFileIO : A datastrcutre created using string stream, that reads student records from excel sheets.
1. BookFileIO : A datastructure created using string stream, that reads book records from excel sheets.

## Working 

* When the software starts all data is read from their respective excel sheets and is put into the hash table. It includes all the unreturned books, data of books and students.
* When a book is issued new data is added into the hash table.
* when a book is returned old data gets removed from hash table and gets written down into permanent records.
* While closing the records are stored into a file to be extracted the next time the software runs
