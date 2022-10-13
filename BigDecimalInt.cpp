#include <iostream>
#include "BigDecimalInt.h"

using namespace std;

bool BigDecimalInt::operator>(BigDecimalInt anotherDec){
    int len1 = this->num.length();
    int len2 = anotherDec.num.length();

    if(len1 > len2){
        return true;
    }else if(len1 < len2){
        return false;
    }else{
        for(int i=0; i<len1; i++){
            if(this->num[i] > anotherDec.num[i]){
                return true;
            }
        }
        return false;
    }
}

bool BigDecimalInt::operator==(BigDecimalInt anotherDec){
    int len1 = this->num.length();
    int len2 = anotherDec.num.length();

    if(len1 == len2){
        for(int i=0; i<len1; i++){
            if(this->num[i] != anotherDec.num[i]){
                return false;
            }
        }
        return true;
    }else
        return false;
}

BigDecimalInt BigDecimalInt::operator=(BigDecimalInt anotherDec){
    this->num = anotherDec.num;
    return *this;
}

int BigDecimalInt::size(){
    int len = this->num.size();
    return len;
}

char BigDecimalInt::sign(){
    string num2;
    for(int i=0; i<this->num.length(); i++){
        if(this->num[i] == '-' || this->num[i] == '+'){
            this->numSign = this->num[i];
            this->num.erase(i, 1);
            return this->numSign;
        }
    }
    return this->numSign;
}

ostream &operator<< (ostream &out, BigDecimalInt b){
    out << b.num;
    return out;
}

string BigDecimalInt::get_num(){
    return this->num;
}