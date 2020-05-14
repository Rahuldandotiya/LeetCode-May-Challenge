struct TrieNode {
    char val;
    bool isEnd;
    unordered_map<char, TrieNode*> child;

    TrieNode( char d ) : val(d), isEnd(false) {} 
};

class Trie {
    TrieNode *root;
public:
    Trie() { root = new TrieNode( -1 ); }
    void insert(string word) {
        TrieNode *temp = root;
        for( char i : word ) {
            if( temp->child.find(i) == temp->child.end() )
                temp->child[i] = new TrieNode(i);
            temp = temp->child[i];
        }
        temp->isEnd=true;
    }
    bool search( string word ) {
        TrieNode *temp = root;
        for( char i : word ) {
            if(temp->child.find(i)==temp->child.end() ) return false;
            temp = temp->child[i];
        }
        return temp->isEnd;
    }
    bool startsWith( string prefix ) {
        TrieNode *temp = root;
        for( char i : prefix ) {
            if( temp->child.find(i) == temp->child.end()) return false;
            temp = temp->child[i];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
