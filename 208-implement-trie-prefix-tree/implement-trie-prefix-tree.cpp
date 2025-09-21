
struct Node
{
  Node *list[26]={NULL};
  bool fl=false;
  
};


class Trie {
private:Node *root;
public:
    Trie() {
       root=new Node;
    }
    
    void insert(string word) {
        Node *nod=root;
     
    for(int i=0;i<word.length();i++)
    {
        if(!nod->list[word[i]-'a'])
        {
        nod->list[word[i]-'a']=new Node;
        }
        
        nod=nod->list[word[i]-'a'];
    }
     nod->fl=true;

    }
    
    bool search(string word) {
        Node *nod=root;
        for(int i=0;i<word.length();i++){
        if(nod->list[word[i]-'a'])
        {
          nod=nod->list[word[i]-'a'];
        }
        else
        {
            return false;
        }
        
    }
if(!nod->fl){return false;}
    return true;
    }
    
    bool startsWith(string prefix) {
        Node *nod=root;
        for(int i=0;i<prefix.length();i++){
        if(nod->list[prefix[i]-'a'])
        {
          nod=nod->list[prefix[i]-'a'];
        }
        else
        {
            return false;
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