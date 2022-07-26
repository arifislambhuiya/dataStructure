#Create stack

def create_stack():
    stack = []
    return stack


def check_empty(stack):
    return len(stack) == 0


def push(stack, value):
    stack.append(value)
    print("pushed item : " + value)


def pop(stack):
    if(check_empty(stack)):
        return "stack is empty"
    return stack.pop()


stack = create_stack()
push(stack,str(1))
push(stack,str(2))
push(stack,str(3))
push(stack,str(4))

print("pop item : " + pop(stack))

print(stack)
