class Stack {
  constructor() {
    this.items = [];
    this.count = 0;
  }
  // add elements into stack
  push(elements) {
    this.items[this.count] = elements;
    console.log(`${elements} add to ${this.count}`);
    this.count += 1;
    return this.count - 1;
  }

  // delete elements from stack
  pop() {
    if (this.count == 0) return undefined;
    let deleteItems = this.items[this.count - 1];
    this.count -= 1;
    console.log(`${deleteItems} removed from stack`);
    return deleteItems;
  }

  // check top elements in stack
  peek() {
    console.log(`top elements is ${this.items[this.count - 1]}`);
    return this.items[this.count - 1];
  }
}

const stack = new Stack();

stack.push(100);
stack.push(200);
stack.push(300);

stack.pop();

stack.peek();
