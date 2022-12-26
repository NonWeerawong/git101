class Node:
    def __init__(self, val = 0, next = None):
        self.val = val
        self.next = next

class LinkedList:
    def __init__(self):
        self.head = None
        self.tail = None
    def insert(self, val):
        newNode = Node(val)
        if self.head == None:
            self.head = newNode 
        else:
            self.tail.next = newNode 
        self.tail = newNode

    def printList(self):
        tmp = self.head 
        while tmp != None:
            print(tmp.val, end=' ')
            tmp = tmp.next
        print()

ls1 = LinkedList()

for i in [1, 2, 3, 4, 5]:
    ls1.insert(i);

ls1.printList()