/* Paul Programming YOUTUBE*/
#include <iostream>
#include "List.h"

int main(int argc, char const *argv[]) {

  List L;

  L.AddNode(4);
  L.AddNode(2);
  // L.AddNode(6);
  // L.AddNode(8);

  L.PrintList();

  L.getFirst();

  return 0;
}
