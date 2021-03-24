//
// Created by Howard_Yu on 2021/3/23.
//

#include <iostream>
#include "temper.h"

using namespace std;

int main() {
    temper_type day_temp, night_temp;
    cin >> day_temp;
    do{
        cin >> night_temp;
        cin >> temper_type::std_h_t;
        cin >> temper_type::std_l_t;

        cin >> day_temp;
    }while(day_temp != -99);
}