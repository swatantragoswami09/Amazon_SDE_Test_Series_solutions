    adj=[]
    row, col = key // n, key % n
    if (col - 1) >= 0:
    	adj.append((row*n) + (col - 1))
    if (col + 1) < n:
    	adj.append((row*n) + (col + 1))
    if (row - 1) >= 0:
    	adj.append((row-1)*n + col)
    if (row + 1) < n:
    	adj.append((row + 1)*n + col)
    
    return adj

def find_path(source, arr, n):

	visited = [False] * pow(n, 2)
	queue = []
	queue.append(source)
	while queue:
	
		popped = queue.pop(0)
		visited[popped] = True
		for i in adjacent(popped, arr, n):
		
				if arr[i] == 2:
					return 1
				elif arr[i] == 3 and visited[i] == False:
					queue.append(i)
					
	return 0 
		
	
	


t = int(input())
for i in range(t):
    n = int(input())
    arr = map(int, input().split())
    x = list(arr)
    source = x.index(1)
    print (find_path(source, x, n))

