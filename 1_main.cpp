#include <iostream>

#include "my_linked_list.hpp"

int main()
{
  MyLinkedList<int> list;

  list.head_insert(4);
  cout << list.get_head()->data << endl;
  cout << list.get_tail()->data << endl;
  cout << list.get_size() << endl;
  cout << endl;

  list.head_insert(3);
  cout << list.get_head()->data << endl;
  cout << list.get_tail()->data << endl;
  cout << list.get_size() << endl;
  cout << endl;

  list.head_insert(2);
  cout << list.get_head()->data << endl;
  cout << list.get_tail()->data << endl;
  cout << list.get_size() << endl;
  cout << endl;

  list.head_insert(1);
  cout << list.get_head()->data << endl;
  cout << list.get_tail()->data << endl;
  cout << list.get_size() << endl;
  cout << endl;

  list.tail_insert(4);
  cout << list.get_head()->data << endl;
  cout << list.get_tail()->data << endl;
  cout << list.get_size() << endl;
  cout << endl;

  list.tail_insert(3);
  cout << list.get_head()->data << endl;
  cout << list.get_tail()->data << endl;
  cout << list.get_size() << endl;
  cout << endl;

  list.tail_insert(2);
  cout << list.get_head()->data << endl;
  cout << list.get_tail()->data << endl;
  cout << list.get_size() << endl;
  cout << endl;

  list.tail_insert(1);
  cout << list.get_head()->data << endl;
  cout << list.get_tail()->data << endl;
  cout << list.get_size() << endl;
  cout << endl;

  list.pp();

  return 0;
}
