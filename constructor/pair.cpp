class Pair {
    public:
    int *pa,*pb
    Pair(int, int);
    Pair(const Pair &);
    ~Pair();
    
};

Pair::Pair(int a, int b){
    pa = new int;
    pb = new int;
    
    *pa = a;
    *pb = b;
    
}

Pair::Pair(const Pair & obj){
    pa = new int;
    pb = new int;
    
    *pa = *(obj.pa);
    *pb = *(obj.pb);
}

Pair::~Pair(){
    delete pa;
    delete pb;
}