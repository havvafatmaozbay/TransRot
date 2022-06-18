//
//  TransRot.hpp
//  TransRot
//
//  Created by Havva Fatma Özbay on 15.06.2022.
//

#ifndef TransRot_hpp
#define TransRot_hpp

#include <stdio.h>
#include<iostream>
using namespace std;

class TransRot{
private:
    double x,y,z,newX, newY, newZ;
    string opType;
    
public:
    TransRot();
    void setXYZ(double,double,double);
    void setX(double );
    void setY(double );
    void setZ( double );
    double getX();
    double getY();
    double getZ();
    void translateAlongX(double);
    void translateAlongY(double);
    void translateAlongZ(double);
    void rotateAlongX(double);
    void rotateAlongY(double);
    void rotateAlongZ(double);
    double getRadian(double);
    void print();
    string getoptype();
    void updateCoordinates(void);
    
    
};

#endif /* TransRot_hpp */
