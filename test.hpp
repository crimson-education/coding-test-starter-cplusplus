#ifndef TEST_H
#define TEST_H

#include <string>
#include <iostream>
#include <map>

void printMap(std::map<int,int> & mp) {
  for (auto const& m : mp) {
    std::cout << m.first << ": " << m.second << std::endl;
  }
}

void test(int expected, int actual, std::string test_name) {
  if (expected == actual) {
    std::cout << test_name << " PASSED" << std::endl;
  } else {
    std::cout << test_name << " FAILED!" << std::endl;
    std::cout << "Expected " << expected << " but was " << actual << std::endl;
  }
}

void test(std::map<int,int> expected, std::map<int,int> actual, std::string test_name) {
  bool isEqual = expected.size() == actual.size() && std::equal(expected.begin(), expected.end(), actual.begin());
  if (isEqual) {
    std::cout << test_name << " PASSED" << std::endl;
  } else {
    std::cout << test_name << " FAILED!" << std::endl;
    std::cout << "Expected:" << std::endl;
    printMap(expected);
    std::cout << "But was:" << std::endl;
    printMap(actual);
  }
}

#endif
