class Fighter{
    int mHp; // >= 0
    int mPower; // >= 0
    bool mStatus; // true: alive false: dead
public:
    Fighter();
    Fighter(int, int);
    
    int getHp();
    int getPower();
    bool getStats();
    void setHp(int);
    void setPower(int);
    void emPower(int);
    void setStatus(bool);
    void hit(Fighter*);
    void attack(Fighter*);
};
