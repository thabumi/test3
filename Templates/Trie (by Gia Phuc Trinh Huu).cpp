class trie {
  public:
    trie* g[2];
    int right_most;
    trie() : right_most(0) { g[0] = g[1] = nullptr; }
 
    static void add(trie* root, int x, int pos) {
        for (int i = 19; i >= 0; i--) {
            root->right_most = pos;
            int b = (x >> i) & 1;
            if (root->g[b] == nullptr) root->g[b] = new trie();
            root = root->g[b];
        }
        root->right_most = pos;
    }
 
    void add(int x, int pos) { add(this, x, pos); }
    // find x such that x ^ current < a and x is right most
    int find(int current, int a, int level = 19) {
        if (level == -1) return -1;
        int o = (current >> level) & 1;
        if ((a >> level) & 1) {
            int res = -1;
            if (g[o] != nullptr) res = g[o]->right_most;
            if (g[1 - o] != nullptr) {
                if (g[1 - o]->right_most > res) res = max(res, g[1 - o]->find(current, a, level - 1));
            }
            return res;
        } else {
            if (g[o] == nullptr) return -1;
            return g[o]->find(current, a, level - 1);
        }
    }
} tree;