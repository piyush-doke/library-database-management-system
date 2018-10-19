#include "short_datetime.h"
#include <string>
using namespace std;


struct Lib_Obj{
	int index;
	Date issued_date;
	Date return_date;
	int days_in_hand;
	bool returned;
	int roll;
	
	Lib_Obj(string time, string index1, string roll1){	
		roll = stoi(roll1);
		index = stoi(index1);
		if (time != "NA"){
			issued_date.remake(stoll(time));
		}

		else {
			issued_date.clear_time();
		}
		returned = false;
	}

	Lib_Obj( string index1, string roll1){
		roll = stoi(roll1);
		index = stoi(index1);
		returned = false;
	}

	void return_book(){
		return_date.instance = time(0);
		returned = true;
	}
};