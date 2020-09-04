
def union(head1,head2):
    l1=[]
    l2=[]
    while head1:
        l1.append(head1.data)
        head1=head1.next
    while head2:
        l1.append(head2.data)
        head2=head2.next
    s1=set(l1)
    s2=set(l2)
    l3=list(s1.union(s2))
    l3.sort()
    # print(l3)
    head=Node(l3[0])
    head.next=None
    temp=head
    for i in range(1,len(l3)):
        p=Node(l3[i])
        temp.next=p
        temp=p
        p.next=None
    return head





#{ 
#  Driver Code Starts
#Initial Template for Python 3

# Node Class
class Node:
    def __init__(self, data):   # data -> value stored in node
        self.data = data
        self.next = None

# Linked List Class
class LinkedList:
    def __init__(self):
        self.head = None
        self.tail=None

    # creates a new node with given value and appends it at the end of the linked list
    def append(self, new_value):
        new_node = Node(new_value)
        if self.head is None:
            self.head = new_node
            self.tail = new_node
            return
        self.tail.next=new_node
        self.tail=new_node
    # prints the elements of linked list starting with head
    def printList(self):
        if self.head is None:
            print(' ')
            return
        curr_node = self.head
        while curr_node:
            print(curr_node.data,end=" ")
            curr_node=curr_node.next
        print(' ')

if __name__ == '__main__':
    t=int(input())
    for cases in range(t):
        n=int(input())
        a = LinkedList() # create a new linked list 'a'.
        nodes_a = list(map(int, input().strip().split()))
        m=int(input())
        b = LinkedList() # create a new linked list 'b'.
        nodes_b = list(map(int, input().strip().split()))
        for x in nodes_a:
            a.append(x)
        for x in nodes_b:
            b.append(x)
        a.head = union(a.head,b.head)
        a.printList()

# } Driver Code Ends
