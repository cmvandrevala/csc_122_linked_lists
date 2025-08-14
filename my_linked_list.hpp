#include "node.hpp"

using namespace std;

template <typename T>
class MyLinkedList
{
  Node<T> *head;
  int size = 0;

public:
  MyLinkedList()
  {
    head = nullptr;
  }

  void head_insert(T data)
  {
    Node<T> *new_node = new Node<T>(data);

    if (head == nullptr)
    {
      head = new_node;
    }
    else
    {
      new_node->next = this->head;
      this->head = new_node;
    }
    size++;
  }

  void tail_insert(T data)
  {
    Node<T> *new_node = new Node<T>(data);

    if (head == nullptr)
    {
      head = new_node;
    }
    else
    {
      Node<T> *tail = get_tail();
      tail->next = new_node;
    }
    size++;
  }

  Node<T> *get_head()
  {
    return head;
  }

  Node<T> *get_tail()
  {
    Node<T> *temp = head;

    while (temp->next != nullptr)
    {
      temp = temp->next;
    }

    return temp;
  }

  int get_size()
  {
    return size;
  }

  void pp()
  {
    Node<T> *temp = head;

    while (temp != nullptr)
    {
      cout << temp->data << endl;
      temp = temp->next;
    }
  }
};
