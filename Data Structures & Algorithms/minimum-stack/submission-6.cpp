class MinStack {
public:
    MinStack() {
        pool.reserve(capacity);
        minVector.reserve(capacity);
    }
    
    void push(int val) {
        pool.push_back(val);
        if(val<min)
        {
            min=val;
        }
        minVector.push_back(min);
    }
    
    void pop() {
        pool.pop_back();
        minVector.pop_back();
        if(minVector.size()!=0)
        {
            min = minVector.back();
        }
        else
        {
            min = std::numeric_limits<int>::max();
        }
    }
    
    int top() {
        return pool.back();
    }
    
    int getMin() {
        return minVector.back();
    }
private:
    std::vector<int> pool;
    std::vector<int> minVector;
    int min{std::numeric_limits<int>::max()};
    static constexpr int capacity{10};
};
