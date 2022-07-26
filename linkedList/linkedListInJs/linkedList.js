class Node {
  constructor(data) {
    this.data = data;
    this.next = null;
  }
}

class LinkedList {
  constructor() {
    this.head = null;
  }

  append(value) {
    if (this.head === null) {
      this.head = new Node(value);
      return;
    }
    let curr = this.head;
    while (curr.next !== null) {
      curr = curr.next;
    }
    curr.next = new Node(value);
  }

  size() {
    let count = 0;
    let curr = this.head;
    while (curr !== null) {
      count++;
      curr = curr.next;
    }
  }

  getFirst() {
    return this.head.data;
  }

  getLast() {
    let lastNode = this.head;
    if (lastNode) {
      while (lastNode.next) {
        lastNode = lastNode.next;
      }
    }
    return lastNode.data;
  }

  display() {
    let curr = this.head;
    while (curr != null) {
      process.stdout.write(`${curr.data} -->`);
      curr = curr.next;
    }
  }
}

const linked = new LinkedList();

linked.append(40);
linked.append(45);
linked.append(50);
linked.append(55);

linked.display();
