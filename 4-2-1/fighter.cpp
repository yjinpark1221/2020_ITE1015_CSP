#include "fighter.h"

Fighter::Fighter() {
    mHp = 20;
    mPower = 0;
    mStatus = true;
}
Fighter::Fighter(int _hp, int _power) {
    mHp = _hp;
    mPower = _power;
    mStatus = mHp>0;
}

int Fighter::getHp() {return mHp;}
int Fighter::getPower() {return mPower;}
bool Fighter::getStats() {return mStatus;}

void Fighter::setHp(int _hp) {
    if (_hp < 0) mHp = 0;
    else mHp =_hp;
    if (mHp == 0) mStatus = false;
}
void Fighter::setPower(int _power) {
    if (_power < 0) mPower = 0;
    else mPower = _power;
}
void Fighter::setStatus(bool _status) {
    mStatus = _status;
}

void Fighter::hit(Fighter * _enemy) {     //H
    _enemy->setHp(_enemy->getHp()-mPower);
}
void Fighter::attack(Fighter * _enemy) {  //A
    _enemy->setHp(_enemy->getHp()-mPower);
    mPower = 0;
}
void Fighter::emPower(int _power) {       //P
    setPower(mPower + _power);
}

