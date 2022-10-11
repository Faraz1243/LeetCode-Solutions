class MyCircularQueue {
 public:
  deque<int> circ_q;
  int capacity;

  MyCircularQueue(int k) {
    circ_q.clear();
    capacity = k;
  }

  bool enQueue(int value) {
    if (isFull()) return false;
    circ_q.push_back(value);
    return true;
  }

  bool deQueue() {
    if (isEmpty()) return false;
    circ_q.pop_front();
    return true;
  }

  int Front() {
    if (isEmpty()) return -1;
    return circ_q.front();
  }

  int Rear() {
    if (isEmpty()) return -1;
    return circ_q.back();
  }

  bool isEmpty() { return circ_q.empty(); }

  bool isFull() { return circ_q.size() == capacity; }
};