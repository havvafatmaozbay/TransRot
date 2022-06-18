//
//  TransRot.cpp
//  TransRot
//
//  Created by Havva Fatma Özbay on 15.06.2022.
//

#include "TransRot.hpp"
#include<math.h>
#include<cmath>



TransRot::TransRot(){
    setXYZ(0.0, 0.0, 0.0);
    newX = 0.0;
    newY = 0.0;
    newZ = 0.0;
}
void TransRot::setXYZ(double X, double Y, double Z){
    setX(X);
    setY(Y);
    setZ(Z);
}
void TransRot::setX(double X){
    x = X;
}
void TransRot::setY(double Y){
    y=Y;
}
void TransRot::setZ(double Z){
    z=Z;
}
double TransRot::getX(){
    return x;
}
double TransRot::getY(){
    return y;
}
double TransRot::getZ(){
    return z;
}
void TransRot::translateAlongX(double xa){
    newX = x + xa;
    newY= y;
    newZ= z;
    opType.assign("TRANSLATE X");
}
void TransRot::translateAlongY(double ya){
    newX = x;
    newY= y + ya;
    newZ= z;
    opType.assign("TRANSLATE Y");
}
void TransRot::translateAlongZ(double za){
    newX = x;
    newY= y;
    newZ= z + za;
    opType.assign("TRANSLATE Z");
}
double TransRot::getRadian(double radian){
    return radian*M_PI/180;
}
void TransRot::rotateAlongX(double xb){
    newX = x;
    newY = y*cos(getRadian(xb)-z*sin(getRadian(xb)));
    newZ = y*sin(getRadian(xb)+z*cos(getRadian(xb)));
    opType.assign("ROTATE X");
}
void TransRot::rotateAlongY(double yb){
    newX = x*cos(getRadian(yb)-z*sin(getRadian(yb)));
    newY = y;
    newZ = x*sin(getRadian(yb)+z*cos(getRadian(yb)));
    opType.assign("ROTATE Y");
}
void TransRot::rotateAlongZ(double zb){
    newX = x*cos(getRadian(zb)-y*sin(getRadian(zb)));
    newY = x*cos(getRadian(zb)+y*sin(getRadian(zb)));
    newZ = z;
    opType.assign("ROTATE Z");
}
string TransRot::getoptype(){
    return opType;
}
void TransRot::print(){
    cout <<"P"<<getX()<<","<<getY()<<","<<getZ()<<")"
    <<"---------"<<"get operation type"<<getoptype()<<"----->"
    <<"PNEW"<<newX<<","<<newY<<","<<newZ<<")"<<endl;
}
void TransRot::updateCoordinates(){
    x= newX;
    y= newY;
    z=newZ;
}

