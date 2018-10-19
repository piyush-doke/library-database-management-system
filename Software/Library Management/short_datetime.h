//a shorter and simpler implimentation of datetime class c++
#include <ctime>
#include <string>
using namespace std;

struct Date{

	time_t instance;

	Date(){
		instance = time(0);
		
	}

	void remake(long long v){
		
		instance = v;
	}

	int operator- ( Date &d ){
		long int to_return = difftime(instance , d.instance);
		return to_return/(24*60*60);
	}

	string show(){
		string to_ret = ctime(&instance);
		return to_ret.substr(0, to_ret.size()-1);
	}

	void clear_time(){
		string st_date = "NA";
	}


};

