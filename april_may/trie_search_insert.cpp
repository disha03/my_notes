class Trie {
public:
    /** Initialize your data structure here. */
    struct trienode{
        char c;
        trienode* arr[27];
        bool count;
        
    };
    trienode* root=new trienode();
   
    Trie() {
          root->c='/';
        
        for(int i=0;i<26;i++)
        {
            root->arr[i]=NULL;
        }
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
         trienode* curr=root;
        for(int i=0;i<word.size();i++){
            int index=word[i]-'a';
            if(curr->arr[index]==NULL)
            {
                 trienode* getnode=new trienode();
                 getnode->c=word[i];
                getnode->count=0;
                for(int i=0;i<26;i++)
                {
                    getnode->arr[i]=NULL;
                }
                 curr->arr[index]=getnode;
               
            }
            
                curr=curr->arr[index];
            
           
           
        }
         curr->count=true;
        
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        trienode* curr=root;
        int index;
        for(int i=0;i<word.size();i++){
            index=word[i]-'a';
            if(curr->arr[index]==NULL)
            {
                 return false;
            }
           
                curr=curr->arr[index];
            
        }
        if(curr->count==true)
        {return true;}
        return false;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
         trienode* curr=root;
        for(int i=0;i<prefix.size();i++){
            int index=prefix[i]-'a';
            if(curr->arr[index]==NULL)
            {
                 return false;
            }
            else{
                curr=curr->arr[index];
            }
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