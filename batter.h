#ifndef BATTER_H
#define BATTER_H
#include <iostream>

class batter{
    public:
        batter();
        batter(float, float, float, int, int, int, int, int, int, int);
        std::string getName();
        float getAVG();
        float getOBP();
        float getSLG();
        int getHR();
        int getSingles();
        int getDbles();
        int getTriples();
        int getSO();
        int getAB();
        int getHits();
        int getWalks();

        void setName(std::string);
        void setAVG(int, int);
        void setOBP(int, int, int);
        void setSLG(int, int, int, int, int);
        void setHR(int);
        void setSingles(int);
        void setDbles(int);
        void setTriples(int);
        void setSO(int);
        void setAB(int);
        void setHits(int, int, int, int);
        void setWalks(int);

        void printSlash();
        void printHits();
        void printAB();



    private:
        std::string name;
        float AVG;
        float OBP;
        float SLG;
        int HR;
        int singles;
        int dbles;
        int triples;
        int SO;
        int AB;
        int hits;
        int walks;


};

#endif