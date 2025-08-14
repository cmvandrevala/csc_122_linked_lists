#include <iostream>

using namespace std;

template <typename T>
class Node
{
public:
  T data;
  Node *next;

  Node(T d) : data(d), next(nullptr) {}

  Node(T d, Node *n) : data(d), next(n) {}
};
