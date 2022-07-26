class Node {
  constructor(data) {
    this.data = data;
    this.next = null;
  }
}

class Stack {
  constructor() {
    this.top = null;
  }

  isEmpty() {
    return this.top === null;
  }

  push(data) {
    const newNode = new Node(data);
    newNode.next = this.top;
    this.top = newNode;
  }

  pop() {
    if (this.isEmpty()) return;
    this.top = this.top.next;
  }

  peek() {
    if (this.isEmpty()) return -404;
    return this.top.data;
  }

  display() {
    if (this.isEmpty()) return;
    let curr = this.top;
    process.stdout.write("(Top)");

    while (curr.next) {
      process.stdout.write(`${curr.data} -->`);
      curr = curr.next;
    }
    process.stdout.write(`${curr.data}\n`);
  }
}

(function () {
  const stack = new Stack();
  stack.push(10);
  stack.push(20);
  stack.push(30);
  stack.push(40);
  stack.push(50);

  stack.display();

  stack.pop();
  stack.pop();

  stack.display();

  console.log(`${stack.peek()} is the top elements of the stack`);
})();
