#include "fighter.h"

Fighter::Fighter() {
    mHp = 20;
    mPower = 0;
    mStatus = true;
}
Fighter::Fighter(int _hp, int _power) {
    mHp = _hp;
    mPower = _power;
    mStatus = true;
}

int Fighter::getHp() {
    return this -> mHp;
}
int Fighter::getPower() {
    return this -> mPower;
}
bool Fighter::getStats() {
    return this -> mStatus;
}

void Fighter::setHp(int _hp) {
    if (_hp < 0) this -> mHp = 0;
    else this -> mHp =_hp;
    if (mHp == 0) this -> mStatus = false;
}
void Fighter::setPower(int _power) {
    if (_power < 0) this -> mPower = 0;
    else this -> mPower = _power;
}
void Fighter::setStatus(bool _status) {
    this -> mStatus = _status;
}

void Fighter::hit(Fighter * _enemy) {     //H
    _enemy -> setHp(_enemy -> getHp() - this -> mPower);
}
void Fighter::attack(Fighter * _enemy) {  //A
    _enemy -> setHp(_enemy -> getHp() - this -> mPower);
    this -> mPower = 0;
}
void Fighter::emPower(int _power) {       //P
    this -> setPower(this -> mPower + _power);
}
