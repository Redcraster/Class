// Counter.h
#ifndef COUNTER_H
#define COUNTER_H

class Counter {
private:
    int value;

public:
    Counter(int initial = 1);
    void increment();
    void decrement();
    int get_value() const;
};

#endif // COUNTER_H