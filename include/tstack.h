// Copyright 2021 NNTU-CS
#ifndef INCLUDE_TSTACK_H_
#define INCLUDE_TSTACK_H_

template <typename T, int size>
class TStack {
 private:
  T arr[1000];
  int top;

 public:
  TStack() : top(-1) {}
  bool isEmpty() { return top == -1; }
  bool isFull() { return size == top + 1; }
  T get() {
    if (isEmpty()) throw "The stack is empty";
    return arr[top];
  }
  T getAndPop() {
    T t = get();
    pop();
    return t;
  }
  void pop() {
    if (!isEmpty()) top--;
  }
  bool push(T value) {
    if (isFull()) return false;
    arr[++top] = value;
    return true;
  }
};
#endif  // INCLUDE_TSTACK_H_
