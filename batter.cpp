#include "batter.h"
#include <iostream>

batter::batter(){
    name = "undefined";
    AVG = 0;
    OBP = 0;
    SLG = 0;
    HR = 0;
    singles = 0;
    dbles = 0;
    triples = 0;
    SO = 0;
    AB = 0;
}

//batter::batter(std::string _name, float _AVG, float _OBP, float _SLG, int _HR, int _singles, int _dbles, int _triples, int _SO, int _AB, int _hits, int _walks):
//    name(_name), AVG(_AVG), OBP(_OBP), SLG(_SLG), HR(_HR), singles(_singles), dbles(__dbles), triples(_triples), SO(_SO), AB(_AB), walks(_walks), hits(_hits){}

std::string batter::getName(){
    return name;
}

float batter::getAVG(){
    return AVG;
}

float batter::getOBP(){
    return OBP;
}

float batter::getSLG(){
    return SLG;
}

int batter::getHR(){
    return HR;
}

int batter::getSingles(){
    return singles;
}

int batter::getDbles(){
    return dbles;
}

int batter::getTriples(){
    return triples;
}

int batter::getSO(){
    return SO;
}

int batter::getAB(){
    return AB;
}

void batter::setName(std::string _name){
    name = _name;
}

void batter::setAVG(int hits, int AB){
    AVG = hits/AB;
}

void batter::setOBP(int hits, int AB, int walks){
    OBP = (hits + walks)/AB;
}

void batter::setSLG(int AB, int HR, int singles, int dbles, int triples){
    SLG = ((singles) + (2*dbles) + (3*triples) + (4*HR))/AB;
}

void batter::setHR(int _HR){
    HR = _HR;
}

void batter::setSingles(int _singles){
    singles = _singles;
}

void batter::setDbles(int _dbles){
    dbles = _dbles;
}

void batter::setTriples(int _triples){
    triples = _triples;
}

void batter::setSO(int _SO){
    SO = _SO;
}

void batter::setAB(int _AB){
    AB = _AB;
}

void batter::setHits(int singles, int dbles, int triples, int HR){
    hits = singles + dbles + triples + HR;
}

void batter::setWalks(int _walks){
    walks = _walks;
}

void batter::printSlash(){
    std::cout << name << " is batting " << AVG << "/" << OBP << "/" << SLG << std::endl;
}

void batter::printHits(){
    std::cout << name << " has hit:" << std::endl;
    std::cout << singles << " singles" << std::endl;
    std::cout << dbles << " doubles" << std::endl;
    std::cout << triples << " triples" << std::endl;
    std::cout << HR << " home runs" << std::endl;
}

void batter::printAB(){
    if (AB == 1){
        std::cout << name << " has had " << AB << " at bat." << std::endl;
    }

    else{
        std::cout << name << " has had " << AB << " at bats." << std::endl;
    }
}