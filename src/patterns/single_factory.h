/* Copyright (c) 2019 The Design Pattern Authors. All rights reserved.
*/
#ifndef SINGLE_FACTORY_H_
#define SINGLE_FACTORY_H_

#include <iostream>
#include <memory>
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

class SingleFactory {
 private:
  /* data */
 public:
  SingleFactory(/* args */);
  std::shared_ptr<Car> CreateCar(std::string car);
  ~SingleFactory();
};

#endif  // SINGLE_FACTORY_H_
