class MyHashSet {
public:
vector<int> keys;

    MyHashSet() {
        
    }
    
    void add(int key) {
        for(int x:keys){
            if(x==key) return;
        }
        keys.push_back(key);
    }
    
    void remove(int key) {
        for(int i=0;i<keys.size();i++){
            if(keys[i]==key){
            keys[i]=-1;
            return;
            }
        }
    }
    
    bool contains(int key) {
        for(int x:keys){
            if(x==key) return true;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */