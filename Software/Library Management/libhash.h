# include <iostream>
# include <map>
#include <vector>
//#include "libobj.h"
using namespace std;

//The Image Data structure 
//Implimented by using map inside hash table
class Hash{
	vector < map <int,Lib_Obj*> > heap_vec;
	int size;

	//checks if a given roll has taken a book or not
	bool exists( int roll){
		int index = h(roll);
		if (heap_vec[index].find(roll) == heap_vec[index].end()){
			return false;
		}
		return true;
	}

public:

	Hash(int size1){
		size = size1;
		heap_vec.resize(size);
	}

	//The hash function
	int h(int index){
		return index%size;
	}

	//Add new  items to The datastructure
	bool add( Lib_Obj* obj){
		for (auto i : heap_vec) {
			for (auto j : i){
				if ( ( j.second->index == obj ->index or j.first == obj->roll ) and not j.second->returned){
					return false;
				}
			}
		}

		int index = obj->roll;
		heap_vec[h(index)][index] = obj;
		return true;
	}

	//Makes a set of all the LibObjects stored inside who has not returned the book
	vector <Lib_Obj*> getset(){
		
		vector <Lib_Obj*> to_ret;
		for (auto i : heap_vec){
			for (auto j : i){

				if (j.second->returned){
					to_ret.insert(to_ret.begin(),j.second);
				}
				else to_ret.push_back(j.second);
				
			}
		}


		return to_ret;
	}

	//remove a pirticular enrty
	bool remove( int roll){
		int index = h(roll);
		if(exists(roll)){
			heap_vec[index].erase(roll);
			return true;
		}
		return false;
	}

	//Get the adress of the id with the roll no.
	Lib_Obj* get(int roll){
		int index = h(roll);
		if(exists(roll)){
			return heap_vec[index][roll];
		}
		return NULL;
	}

	void printall(){
		cout<<"priting the values to write :"<<endl;
		for (auto i :heap_vec){
			for (auto j : i){
				cout<< j.second -> roll <<endl;
			}
		}
	}

	//Remove all the entries who have returned the book
	void remove_returned(){
		for(auto i : heap_vec){
			for (auto j:i){
				if ( j.second->returned ){
					i.erase(j.first);
				}
			}
		}
	}

	string get_unreturned_books(){
		string to_return;
		to_return += "Roll\t\t\tBook-Code\n";
		for(auto i : heap_vec){
			for (auto j:i){
				if ( not j.second->returned ){
					to_return += to_string(j.first) + "\t:\t" + to_string(j.second->index) +"\n";
				}
			}
		}

		return to_return;
	}


};