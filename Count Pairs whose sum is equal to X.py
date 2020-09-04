
'''
class Node:
    def __init__(self, data):   # data -> value stored in node
        self.data = data
        self.next = None
'''
def countPair(h1,h2,n1,n2,x):
    '''
    h1:  head of linkedList 1
    h2:  head of linkedList 2
    n1:  len of  linkedList 1
    n2:   len of linkedList 1
    X:   given sum
    '''
    p=h1
    c=0
    while p:
        q=h2
        while q:
            if q.data+p.data==x:
                c+=1
            q=q.next
            # n2-=1
            
        p=p.next
        # n1-=1
    return c
        


#{ 
#  Driver Code Starts
#Initial Template for Python 3

#contributed by RavinderSinghPB
# Node Class
class Node:
    def __init__(self, data):   # data -> value stored in node
        self.data = data
        self.next = None

# Linked List Class
class LinkedList:
    def __init__(self):
        self.head = None

    # creates a new node with given value and appends it at the end of the linked list
    def append(self, new_value):
        new_node = Node(new_value)
        if self.head is None:
            self.head = new_node
            return
        curr_node = self.head
        while curr_node.next is not None:
            curr_node = curr_node.next
        curr_node.next = new_node
        

                
if __name__ == '__main__':
    t=int(input())
    for cases in range(t):
        
        n1=int(input())
        ll1 = LinkedList() # create a new linked list 'll1'.
        nodes_ll1 = list(map(int, input().strip().split()))
        for nodes in nodes_ll1:
            ll1.append(nodes)  # add to the end of the list
        
        n2=int(input())
        ll2=LinkedList()  #create a new linked list 'll1'.
        nodes_ll2 = list(map(int, input().strip().split()))
        for nodes in nodes_ll2:
            ll2.append(nodes)  # add to the end of the list
        
        X=int(input())
        
        
        print(countPair(ll1.head,ll2.head,n1,n2,X))


# } Driver Code Ends
