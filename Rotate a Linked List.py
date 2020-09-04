
'''
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''

# This function should rotate list counter-
# clockwise by k and return new head (if changed) 
def rotateList(head, k):
    p=head
    l=[]
    while p:
        l.append(p.data)
        p=p.next
    l=l[k%len(l):len(l)]+l[0:k%len(l)]
    # print(l)
    p=head
    for i in l:
        p.data=i
        p=p.next
    return head




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
        while(temp):
            print(temp.data, end=" ")
            # arr.append(str(temp.data))
            temp = temp.next
        print("")


if __name__ == '__main__':
    start = LinkedList()
    t = int(input())
    while(t > 0):
        llist = LinkedList()
        n = int(input())
        values = list(map(int, input().strip().split()))
        for i in reversed(values):
            llist.push(i)
        k = int(input())
        new_head = rotateList(llist.head, k)
        llist.head = new_head
        llist.printList()
        t -= 1
# Contributed by: Harshit Sidhwa

# } Driver Code Ends
