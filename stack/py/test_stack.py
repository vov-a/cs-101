import pytest
from stack import Stack

def test_stack():
  myStack = Stack('i', [0, 0])

  assert myStack.size() == 0
  assert myStack.empty() is True
  assert myStack.peek() is None
  assert myStack.pop() is None

  myStack.push(11)

  assert myStack.size() == 1
  assert myStack.empty() is False
  assert myStack.peek() is 11

  myStack.push(12)
  assert myStack.size() == 2
  assert myStack.peek() is 12

  b = myStack.pop()
  assert b == 12
  assert myStack.size() == 1

  a = myStack.pop()
  assert a == 11
  assert myStack.empty() is True
  assert myStack.peek() is None
  assert myStack.pop() is None

  myStack.push(11)
  myStack.push(11)
  assert myStack.push(11) is None