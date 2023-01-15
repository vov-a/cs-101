#include <iostream>
#include <list>
#include <cstring>
using namespace std;


class HashTable 
{
private:
  static const int hashGroups = 10;
  list<pair<int, string>> table[hashGroups];

public:
  bool isEmpty() const;
  int hashFunction(int key);
  void insertItem(int key, string value);
  void removeItem(int key);
  void searchTable(int key);
  void printTable();

};

bool HashTable::isEmpty() const
{
  int sum{};
  for (int i{}; i < hashGroups; i++)
  {
    sum += table[i].size();
  }

  if (!sum)
  {
    return true;
  }
  return false;
}

int HashTable::hashFunction(int key) 
{
  return key % hashGroups;
}

void HashTable::insertItem(int key, string value)
{
  int hashValue = hashFunction(key);
  auto& cell = table[hashValue];
  auto bItr = begin(cell);
  bool keyExists = false;
  for (; bItr != end(cell); bItr++)
  {
    if (bItr -> first == key)
    {
      keyExists = true;
      bItr -> second = value;
      break;
    }
  }
  if (!keyExists)
  {
    cell.emplace_back(key, value);
  }
  return;
}

void HashTable::removeItem(int key)
{
  int hashValue = hashFunction(key);
  auto& cell = table[hashValue];
  auto bItr = begin(cell);
  bool keyExists = false;
  for (; bItr != end(cell); bItr++)
  {
    if (bItr -> first == key)
    {
      keyExists = true;
      bItr = cell.erase(bItr);
      break;
    }
  }
  if (!keyExists)
  {
    std::cout << "Key not found" << std::endl;
  }
  return;
}


void HashTable::printTable() {
  for (int i{}; i < hashGroups; i++)
  {
    if (table[i].size() == 0) continue;

    auto bItr = table[i].begin();
    for (; bItr != table[i].end(); bItr++)
    {
        std::cout << bItr->first << ", " << bItr->second << std::endl;
    }

  }
  return;
}

void HashTable::searchTable(int key){
  int hashValue = hashFunction(key);
  auto& cell = table[hashValue];
  auto bItr = begin(cell);
  bool keyExists = false;
  string res;
  for (; bItr != end(cell); bItr++)
  {
    if (bItr -> first == key)
    {
      keyExists = true;
      std::cout << bItr->first << ", " << bItr->second << std::endl;
      break;
    }
  }
  if (!keyExists)
  {
    std::cout << "Key not found" << std::endl;
  }
  return;
}


int main() 
{
  HashTable HT;

  std::cout << HT.isEmpty() << std::endl;

  HT.insertItem(812, "Spb");
  HT.insertItem(925, "MSK");
  HT.searchTable(812);
  HT.removeItem(812);
  std::cout << HT.isEmpty() << std::endl;
  HT.printTable();

}