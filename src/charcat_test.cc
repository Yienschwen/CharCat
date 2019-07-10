#include <iostream>

#include "charcat.h"

int main() {
  auto cat = MakeCharCat();
  cat->FeedChar('a');
  std::cout << cat->Results() << '\n';
  cat->FeedChar('b');
  std::cout << cat->Results() << '\n';
  cat->FeedChar('c');
  std::cout << cat->Results() << '\n';
}
