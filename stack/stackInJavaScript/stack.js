let MAX = 100;
let top = -1;
let arr = Array(MAX).fill(0);

console.log(arr);

function isEmpty() {
  return top < 0;
}

function push(element) {
  if (top >= MAX - 1) {
    return console.log("Stack is full");
  } else {
    top++;
    arr[top] = element;
    return console.log(element + " is popped into stack");
  }
}

function pop() {
  if (top >= MAX - 1) {
    return console.log("Stack is empty");
  } else {
    let x = arr[top];
    top--;
    return x;
  }
}

function print() {
  for (var i = top; i > -1; i--) {
    console.log(" " + arr[i]);
  }
}

push(100);
push(200);
push(300);
push(400);

pop();

print();
