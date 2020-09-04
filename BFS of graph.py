# def tsort(g): 
    # rr=[]
    # counts = dict((k, 0) for k in g)
    # print(counts)
    # for n, neighbors in g.items(): 
    #     for nh in neighbors: 
    #         counts[nh] = counts[nh] + 1 
    # while g: 
    #     roots = [k for k in g if counts[k] == 0]
    #     return roots[0]
        

def bfs(g,N):
    '''
    can use queue module already imported
    :param g: given adjacency list of graph
    :param N: number of nodes in N.
    :return: print the bfs of the graph from node 0, newline is given by driver code
    '''
    # print(g)
    visited=[False]*N
    q=[]
    q.append(0)
    visited[0]=True
    while q:
        s=q.pop(0)
        print(s,end=' ')
        for i in g[s]:
            if visited[i]==False:
                q.append(i)
                visited[i]=True
                


#{ 
#  Driver Code Starts
#Initial Template for Python 3

import atexit
import io
import sys
from collections import defaultdict
import queue
#Contributed by : Nagendra Jha


#Graph Class:
class Graph():
    def __init__(self,vertices):
        self.graph = defaultdict(list)
        self.V = vertices

    def addEdge(self,u,v): # add directed edge from u to v.
        self.graph[u].append(v)

if __name__ == '__main__':
    test_cases = int(input())
    for cases in range(test_cases) :
        N,E = map(int,input().strip().split())
        g = Graph(N)
        edges = list(map(int,input().strip().split()))

        for i in range(0,len(edges),2):
            u,v = edges[i],edges[i+1]
            g.addEdge(u,v) # add a directed edge from u to v

        bfs(g.graph,N) # print bfs of graph
        print()

# } Driver Code Ends
