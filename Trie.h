#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct TrieNode {
    char key;
    TrieNode** child;
};

struct Trie {
    TrieNode* root;
};

