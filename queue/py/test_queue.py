import pytest
from queue import Queue

def test_queue():
  myQueue = Queue()

  assert myQueue.size() == 0
  assert myQueue.empty() is True
  assert myQueue.head() is None
  assert myQueue.tail() is None
  assert myQueue.popleft() is None

  myQueue.push(11)

  assert myQueue.size() == 1
  assert myQueue.empty() is False
  assert myQueue.head() is 11
  assert myQueue.tail() is 11

  myQueue.push(12)
  assert myQueue.size() == 2
  assert myQueue.head() is 11
  assert myQueue.tail() is 12

  first = myQueue.popleft()
  assert first == 11
  assert myQueue.size() == 1

  second = myQueue.popleft()
  assert second == 12
  assert myQueue.empty() is True
  assert myQueue.head() is None
  assert myQueue.tail() is None
  assert myQueue.popleft() is None