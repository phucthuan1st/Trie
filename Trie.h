#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct Node {
    char key;
    Node** child;
};

struct Trie {
    Node* root;
};

