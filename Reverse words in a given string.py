
'''
	Your task is to reverse the string without reversing
	individual words and return the obtained string.

	Function Arguments: s (given string)
	Return Type: string
'''


def reverseWords(s):
    l=list(s.split('.'))
    l=l[::-1]
    print('.'.join(l),end='')




#{ 
#  Driver Code Starts
# Initial Template for Python 3

import atexit
import io
import sys

_INPUT_LINES = sys.stdin.read().splitlines()
input = iter(_INPUT_LINES).__next__
_OUTPUT_BUFFER = io.StringIO()
sys.stdout = _OUTPUT_BUFFER


@atexit.register
def write():
    sys.__stdout__.write(_OUTPUT_BUFFER.getvalue())


if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        s = str(input())
        s = reverseWords(s)
        print()

# } Driver Code Ends
