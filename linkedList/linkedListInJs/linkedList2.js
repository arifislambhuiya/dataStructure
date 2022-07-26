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

  print() {
    let str = " ";
    let curr = this.head;
    while (curr != null) {
      str += curr.data + "-->";
      curr = curr.next;
    }
    process.stdout.write(`${str}`);
  }

  contains(value) {
    let curr = this.head;
    while (curr != null) {
      if (curr.data === value) {
        return true;
      }
      curr = curr.next;
    }

    return false;
  }
}

const list = new LinkedList();
list.append("a");
list.append("b");
list.append("c");
list.append("d");

list.print();

console.log(list.contains("a"));
console.log(list.contains("b"));
console.log(list.contains("c"));
console.log(list.contains("d"));
console.log(list.contains("h"));
console.log(list.contains("z"));
