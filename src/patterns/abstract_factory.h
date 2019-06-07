/* Copyright (c) 2019 The Design Pattern Authors. All rights reserved.
*/

#ifndef VIRTUAL_FACTORY_H_
#define VIRTUAL_FACTORY_H_
#include <iostream>
#include <memory>
namespace virtualfactory {
class Car {
 public:
  virtual void product() = 0;
};

class BenzCar : public Car {
 public:
  void product();
};

class BMWCar : public Car {
 public:
  void product();
};

class Motor {
 public:
  virtual void product() = 0;
};

class BenzMotor : public Motor {
 public:
  void product();
};

class BMWMotor : public Motor {
 public:
  void product();
};

class Factory {
 private:
  /* data */
 public:
  virtual std::shared_ptr<Car> CreateCar() = 0;
  virtual std::shared_ptr<Motor> CreateMotor() = 0;
};

class BMWFactory : public Factory {
 private:
  /* data */
 public:
  BMWFactory(/* args */);
  std::shared_ptr<Car> CreateCar();
  std::shared_ptr<Motor> CreateMotor();
  ~BMWFactory();
  std::string s;
};

class BenzFactory : public Factory {
 private:
  /* data */
 public:
  BenzFactory(/* args */);
  std::shared_ptr<Car> CreateCar();
  std::shared_ptr<Motor> CreateMotor();
  ~BenzFactory();
};
}
#endif
