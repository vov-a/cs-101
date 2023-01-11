class Queue:

  def __init__(self):
    self.elements = []

  def size(self):
    return len(self.elements)
  
  def empty(self):
    return self.size() == 0

  def head(self):
    if self.empty():
      return None
    else:
      return self.elements[0]

  def tail(self):
    if self.empty():
      return None
    else:
      return self.elements[-1];

  def push(self, data):
    self.elements.append(data)

  def popleft(self):
    if self.empty():
      return None
    else:
      item = self.head()
      self.elements.remove(item)
      return item


my_queue = Queue()

print(my_queue.elements)
print(my_queue.size())
print(my_queue.empty())
print(my_queue.head())
print(my_queue.tail())
print(my_queue.popleft())

my_queue.push(11)

print(my_queue.elements)
print(my_queue.size())
print(my_queue.empty())
print(my_queue.head())
print(my_queue.tail())

my_queue.push(12)

print(my_queue.elements)
print(my_queue.size())
print(my_queue.empty())
print(my_queue.head())
print(my_queue.tail())

first = my_queue.popleft()

print(my_queue.elements)
print(first)
print(my_queue.size())
print(my_queue.empty())
print(my_queue.head())
print(my_queue.tail())

second = my_queue.popleft()

print(my_queue.elements)
print(second)
print(my_queue.size())
print(my_queue.empty())
print(my_queue.head())
print(my_queue.tail())
print(my_queue.popleft())