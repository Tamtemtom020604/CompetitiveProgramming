# You are given a binary tree:

# class Node:
#     def __init__(self, L, R, n):
#         self.left = L
#         self.right = R
#         self.value = n
# Your task is to return the list with elements from tree sorted by levels, which means the root element goes first, then root children (from left to right) are second and third, and so on.

# Return empty list if root is None.

# Example 1 - following tree:

#                  2
#             8        9
#           1  3     4   5
# Should return following list:

# [2,8,9,1,3,4,5]
# Example 2 - following tree:

#                  1
#             8        4
#               3        5
#                          7
# Should return following list:

# [1,8,4,3,5,7]

class Node:
    def __init__(self, L, R, n):
        self.left = L
        self.right = R
        self.value = n

a = list()

def height(node) :
    if node == None:
        return 0
    else :
        lheight = height(node.left)
        rheight = height(node.right)
        
        if lheight > rheight : return lheight + 1
        else : return rheight + 1

def tree_level(node, level) :
    if node == None:
        return
    if level == 1:
        a.append(node)
    elif level > 1:
        tree_level(node.left, level - 1 )
        tree_level(node.right, level - 1)
        
def tree_by_levels(node):
    for i in range(1, height(node)):
        tree_level(node, i)
    return a

print(tree_by_levels(Node(Node(None, Node(None, None, 4), 2), Node(Node(None, None, 5), Node(None, None, 6), 3), 1)))
print(tree_by_levels(None))
print(height(Node(Node(None, Node(None, None, 4), 2), Node(Node(None, None, 5), Node(None, None, 6), 3), 1)))
        