class MyQueue {

private:
    queue<int> input;
    queue<int> output;

public:
    MyQueue() {}

    void push(int x) {
        input.push(x);
    }

    int pop() {
        peek();
        int val = output.front();
        output.pop();
        return val;
    }

    int peek() {
        if (output.empty()) {
            while (!input.empty()) {
                output.push(input.front());
                input.pop();
            }
        }
        return output.front();
    }

    bool empty() {
        return input.empty() && output.empty();
    }
};