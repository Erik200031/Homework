#ifndef POINT2D_H_
#define POINT2D_H_
#include <iostream>
#include <map>

class Point2D{
public:
  void set_x_y(double,double);
  double get_x()const; 
  double get_y()const; 
public:
  Point2D(); 
  Point2D(double ,double ); 
  Point2D(const Point2D & ); 
  Point2D& operator=(const Point2D & ); 
  Point2D operator+(const Point2D & ); 
  Point2D& operator+=(const Point2D & ); 
  Point2D operator-(const Point2D & );
  Point2D& operator-=(const Point2D & );
  Point2D operator*(const Point2D & );
  Point2D& operator*=(const Point2D & );
  bool operator<(const Point2D &)const;
  bool operator>(const Point2D &)const;
  bool operator==(const Point2D &)const;
  bool operator!=(const Point2D &)const;
  void print();
private:
  std::map<double,double> mp;
};

#endif //POINT2D_H_
