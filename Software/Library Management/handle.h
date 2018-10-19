#include <fstream>
#include <iostream>
#include <vector>

#include "libfileio.h"
#include "libhash.h"
using namespace std;



//The pathway connecting back-end to front end
struct Taskmanager{

	Hash* image;
	LibobjFileio records ;
	StudentFileio st_records;
	BookFileio book_records;
	map<int,string> st_database;
	map<int,string> book_database;

	Taskmanager(){
		buildimage();
	}

	//Runs when program starts
	//Creates a hologram of all the databases available
	void buildimage(){
		image = new Hash(4);
		Lib_Obj* obj= records.open_records();
		while(obj){
			image->add(obj);
			obj = records.get_next();
		}
		records.filein.close();
		
		st_database = st_records.get_records();
		book_database = book_records.get_records();

	}

	//Write student records function
	bool write_st_records(string roll, string name){
		if (st_database.find(stoi(roll)) == st_database.end()){
			st_records.write_records(roll,name);
			st_database = st_records.get_records();
			return true;
		}
		return false;
	}

	bool write_book_records(string index, string name){
		if (book_database.find(stoi(index)) == book_database.end()){
			book_records.write_records(index,name);
			book_database = book_records.get_records();
			return true;
		}
		return false;
	}

	//Issue a book function
	bool issue_book (string roll, string book ) {
		Lib_Obj* new_issue= new Lib_Obj(book,roll);
		return image->add(new_issue);
	}

	string get_book_info(string index){
		string to_ret ="Book :- \n";
		if ( book_database.find( stoi(index) ) == book_database.end() ) {
			to_ret += "Book Info Not Available.\nBook not present in current database.\n It is recommended adding the book to the database before proceeding.\n";
		}
		else {
			to_ret = to_ret + "Serial no. : " + index + "\n";
			to_ret += "Name : " + book_database[stoi(index)] + "\n";
		}
		
		return to_ret;
	}

	string get_stud_info(string roll){
		string to_ret ="Student :- \n";
		if ( st_database.find( stoi(roll) ) == st_database.end() ){
			to_ret += "Student Info Not Available.\nRoll no. not present in current database.\n It is recommended adding the Student info to the database before proceeding.\n";
		}
		else {
			to_ret = to_ret + "Roll no. : " + roll + "\n";
			to_ret += "Name : " + st_database[stoi(roll)] + "\n";
		}
		
		return to_ret;
	}

	bool return_book (string roll){
		Lib_Obj* my_obj = image->get(stoi(roll));
		if (my_obj!= NULL and not my_obj->returned){
			my_obj->return_book();
			return true;
		}
		
		return false;

	}

	//Save the hologram
	void save_image(){
		vector<Lib_Obj*> set = image->getset();
		records.write_records(set);
		image->remove_returned();
	}


	//When publish is pressed
	void publish(){
		records.publish();
	}

	string get_unreturned_books(){
		return image->get_unreturned_books();
	}

	void exit(){
		delete image;
	}


};