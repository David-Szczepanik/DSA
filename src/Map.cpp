/**
 * @file Map.cpp
 * @brief This file demonstrates the usage of a Map in C++.
 * @details The Map is a container. It is used to store key-value pairs. The keys in the map are unique. This file contains a function that creates a map, inserts pairs into it, modifies a value, prints the size and contents of the map, and finally clears the map.
 */
#include <iostream>
#include <map>
#include <unordered_map>
using std::map;
using std::string;
using std::pair;


/**
 * @brief Demonstrates the usage of a Map in C++.
 * @details This function shows usage of Map.
 * Keys have to be unique.
 * std::map is implemented like a red-black tree
 * std::unordered_map is implemented like a hash table
 */
void Map() {
  map<string, string> dictionary;

  dictionary.insert(pair<string, string>("1", "red, orange"));
  dictionary.insert(pair<string, string>("3", "green"));
  dictionary.insert(pair<string, string>("2", "blue"));

  dictionary["3"] = "Changed";
  std::cout << dictionary.size() << "\n";

  for (const auto& pair : dictionary)
    std::cout << pair.first << " - " << pair.second << "\n";

  dictionary.clear();
  std::cout << dictionary.size();
}
