  The input list will have at least one element
  Return reference to head of rotated linked list
  Node is defined as

class Node:
    def __init__(self, data):
		self.data = data
		self.next = None
  This is method only submission.
  You only need to complete the method.
"""
def pairWiseSwap(head):
    temp1=None
    temp2=None
    current=head
    if head.next==None:
        return head
    while current!=None and current.next!=None:
        if temp1!=None:
            temp1.next.next=current.next
        temp1=current.next
        current.next=current.next.next
        temp1.next=current
        if temp2==None:
            temp2=temp1
        current=current.next
    return temp2
    




#{ 
#  Driver Code Starts
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def push(self, new_data):
        new_node = Node(new_data)
        new_node.next = self.head
        self.head = new_node

    def printList(self):
        temp = self.head
        while (temp):
            print(temp.data, end=" ")
            # arr.append(str(temp.data))
            temp = temp.next
        print()

if __name__ == '__main__':
    start = LinkedList()
    t = int(input())
    while (t > 0):
        llist = LinkedList()
        n = int(input())
        values = list(map(int, input().strip().split()))
        for i in reversed(values):
            llist.push(i)
        llist.head = pairWiseSwap(llist.head)
        llist.printList()
        t -= 1
# Contributed by: Harshit Sidhwa

# } Driver Code Ends
