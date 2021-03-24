//
// Created by Howard_Yu on 2021/3/23.
//

#ifndef TEM_TEMPER_H
#define TEM_TEMPER_H

#include <iostream>
#include <iomanip>

using namespace std;

enum class temp_rate{too_cool=-2, cool=-1, normal=0, hot=1};

class temper_type{
private :
    double temp;
public :
    static double std_l_t, std_h_t;
    temper_type():temp(0){}
    temper_type(int t):temp(t){}
    friend ostream & operator <<(std::ostream & op, temper_type temper){op<<temper.temp;return op;}
    friend istream & operator >>(std::istream & ip, temper_type & temper){ip>>temper.temp;return ip;}
    friend bool operator !=(int num, temper_type temper){return num != temper.temp;}
    bool operator !=(int num) const{return num != temp;}
    temp_rate logic_three();
    temp_rate logic_four();
    void set_std_t();
    double avg();
};



void temper_type::set_std_t() {

}

double temper_type::avg() {
    return 0;
}

temp_rate temper_type::logic_three() {
	if(this->temp < std_l_t){
		return temp_rate::cool;
	} else if(this->temp > std_h_t){
		return temp_rate::normal;
	}else{
    	return temp_rate::too_cool;
	}
}

temp_rate temper_type::logic_four() {
    	if(this->temp < std_l_t){
		return temp_rate::cool;
	} else if(this->temp > std_h_t){
		return temp_rate::normal;
	}else{
    	return temp_rate::too_cool;
	}
}


#endif 