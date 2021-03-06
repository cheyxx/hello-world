/* Copyright (c) 2019 The Design Pattern Authors. All rights reserved.
*/
#include "patterns/composite.h"
#include <iostream>
#include <vector>
#include <string>
void File::display() { std::cout << "file name: " << _name << std::endl; }

File::~File() {}

void Folder::add(Folder::file_ptr file) { _file.push_back(file); }

void Folder::display() {
  std::cout << "folder name: " << _name << std::endl;
  for (const auto &v : _file) {
    v->display();
  }
}

Folder::~Folder() {}

File::File(std::string name) : _name(name) {}
void File::add(std::shared_ptr<AbstractFile> file) {}

Folder::Folder(std::string name) : _name(name) {}
