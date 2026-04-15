class MyHashMap {
public:
vector<pair<int,int>> mpp;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        for(auto &p:mpp){
            if(p.first==key){
                p.second=value;
                return;
            }
        }
            mpp.push_back({key,value});
    }
    
    int get(int key) {
        for(int i=0;i<mpp.size();i++){
            if(mpp[i].first==key){
                return mpp[i].second;
            }
        }
        // for(auto &p:mpp){
        //     if(p.first==key){
        //         return p.second;
        //     }
        // }
        return -1;
    }
    
    void remove(int key) {
         for(auto &p:mpp){
            if(p.first==key){
               p.first=-1;
               return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */