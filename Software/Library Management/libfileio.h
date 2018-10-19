#include <fstream>
#include <iostream>
#include <vector>
#include "libobj.h"
#include "map"

using namespace std;


struct LibobjFileio {
	
	ifstream filein;
	ofstream fileout;
	ofstream fileout2;

	LibobjFileio(){}

	Lib_Obj* open_records(){
		filein.open("Lib_record_mutable",ios::in);
		string read1,read2,read3,read4;
		//read1 = return date
		//read2 = issue date
		filein>>read1>>read2>>read3>>read4;
		
		if(read3 == "" ){
			return NULL;
		}
		
		Lib_Obj* to_ret = new Lib_Obj(read2,read3,read4);
		return to_ret;
	}

	Lib_Obj* get_next(){
		string a,b,c,d;
		filein>>a>>b>>c>>d;
		if (c==""){
			return NULL;
		}
		Lib_Obj* to_ret = new Lib_Obj(b,c,d);
		return to_ret;

	}

	void publish(){

		ifstream in("Lib_record",ios::in);
		ifstream in2("Lib_record_mutable",ios::in);
		string a,b,c,d;
		
		Date g;
		fstream writeall("../Librecords.xls",ios::out);
		writeall<<"Roll,"<<"Book,"<<"Issued Date,"<<"Returned Date"<<endl<<endl;

		while(in>>a>>b>>c>>d){			
			writeall<<d<<","<<c<<",";
			g.remake(stoll(b));
			writeall<<g.show()<<",";
			g.remake(stoll(a));
			writeall<<g.show()<<endl;
		
			
		}

		while(in2>>a>>b>>c>>d){
			writeall<<d<<","<<c<<",";
			g.remake(stoll(b));
			writeall<<g.show()<<",";
			writeall<<"NA,"<<endl;
		}

		writeall.close();
		in.close();
		in2.close();
		
	}


	void write_records( vector<Lib_Obj*> v){
		
		fileout.open("Lib_record",ios::app);
		fileout2.open("Lib_record_mutable",ios::out);
		for (auto obj : v ){

			if (obj->returned){
				fileout<<obj->return_date.instance<<" "<<obj->issued_date.instance<<" "<<obj->index<<" "<<obj->roll<<endl;

			}
			else {
				fileout2<<"NA"<<" "<<obj->issued_date.instance<<" "<<obj->index<<" "<<obj->roll<<endl;
			}
		}
		fileout.close();
		fileout2.close();
	}




};





struct StudentFileio {
	
	fstream filein;
	ofstream fileout;
	
	StudentFileio(){}


	map<int,string> get_records(){
		string name;
		string roll;
		filein.open("../Student_database.xls",ios::in);
		map<int,string> to_ret ;
		while(getline(filein,roll,',')){
			getline(filein,name,'\n');
			to_ret[stoi(roll)] = name;
		}
		filein.close();
		return to_ret;
	}

	void write_records(string roll, string name){

		fileout.open("../Student_database.xls",ios::app);
		fileout<<roll<<","<<name<<endl;
		fileout.close();
	}

	
};

struct BookFileio {
	
	fstream filein;
	ofstream fileout;
	
	BookFileio(){}


	map<int,string> get_records(){
		string name;
		string indice;
		filein.open("../Book_database.xls",ios::in);
		map <int,string> to_ret;
		while(getline(filein,indice,',')){
			getline(filein,name,'\n');
			to_ret[stoi(indice)] = name;
		}
		filein.close();
		return to_ret;
	}

	void write_records(string index, string name){

		fileout.open("../Book_database.xls",ios::app);
		fileout<<index<<","<<name<<endl;
		fileout.close();
	}

	
};

