class MyHashMap {
public:
//intializing your ds here
  //vector<int>hashtable;
  vector<list<pair<int,int>>>h;
  int s;
    MyHashMap() {
       s=10e6;
       h.resize(s);
      // fill(hashtable.begin(),hashtable.end(),-1);//here whole hashtable intialize with -1
    }
    //here value is added corresponding their  given key
    int hvalue(int key)
    {
        return key%s;
    }
    list<pair<int,int>>::iterator search(int key)
    {
        int i=hvalue(key);
        list<pair<int,int>>::iterator it=h[i].begin();
        while(it!=h[i].end())
        {
            if(it->first==key)return it;
            it++;
        }
        return it;
    }
    void put(int key, int value) {
         //hashtable[key]=value; 
         int i=hvalue(key);
         remove(key);
         h[i].push_back({key,value});
    }
    //value will be get that store on given key
    int get(int key) {
        //return hashtable[key];
        int i=hvalue(key);
        list<pair<int,int>>::iterator it=search(key);
        if(it==h[i].end())return -1;
        else return it->second;
    }
    //here value will remove means again initialize with -1 that key
    void remove(int key) {
        //hashtable[key]=-1;
        int i=hvalue(key);
        list<pair<int,int>>::iterator it=search(key);
        if(it!=h[i].end())h[i].erase(it);
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
