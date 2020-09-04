Structure of node
# Constructor to create a new node  
def __init__(self, var):  
    self.data = var  
    self.left = None
    self.right = None
'''
##complete this function
def printNearNodes(root,l,h):
    if root==None:
        return 
    if root.data>=l:
        printNearNodes(root.left,l,h)
    if root.data>=l and root.data<=h:
        print(root.data,end=' ')
    if root.data<=h:
        printNearNodes(root.right,l,h)
    



#{ 
#  Driver Code Starts
#Initial Template for Python 3

# Constructor to create a new node  
class Node:
    def __init__(self, var):
        self.data = var
        self.left = None
        self.right = None
    

def createNewNode(value):
    temp=Node(value)
    temp.data=value
    temp.left=None
    temp.right=None
    return temp
    

def newNode(root,data):
    if(root is None):
        root=createNewNode(data)
    elif(data<root.data):
        root.left=newNode(root.left,data);
    else:
        root.right=newNode(root.right,data)
        
    return root


def main():
    testcases=int(input())
    while(testcases>0):
        root=None
        sizeOfArray=int(input())
        arr=[int(x) for x in input().strip().split()]
        for i in arr:
            root=newNode(root,i)
            
        lh=[int(x) for x in input().strip().split()]
        
        printNearNodes(root,lh[0],lh[1])
        print()
        
        testcases-=1

if __name__=="__main__":
    main()


# } Driver Code Ends
