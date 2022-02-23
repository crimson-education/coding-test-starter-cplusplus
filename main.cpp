#include "main.hpp"
#include "test.hpp"

std::vector<int> notes{5, 10, 20, 50, 100};

std::map<int,int> getNotes(int amount) {

  std::map<int,int> number_of_notes;


  return number_of_notes;
};

int main() {

  // you can use this for your test suite.
  std::map<int,int> testAnswerN = {
    {5,1},
    {10,1},
    {20,1},
    {50,1},
    {100,1}
  };

  std::map<int,int> answer = getNotes(100);

  test(testAnswerN, answer, "unit-test-name");

  return 0;
}
