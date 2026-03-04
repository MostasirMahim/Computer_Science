import ast;

class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
def make_linked_list(py_list):
    dummy = ListNode(0)
    curr = dummy
    for val in py_list:
        curr.next = ListNode(val)
        curr = curr.next
    return dummy.next
class Solution(object):
    def addTwoNumbers(self, l1, l2):
        arr_1 = []
        arr_2 = []
        while l1:
            arr_1.append(l1.val)
            l1 = l1.next
        while l2:
            arr_2.append(l2.val)
            l2 = l2.next


        total_1 = 0
        total_2 = 0
        total=0
        for number in reversed(arr_1):
            total_1 = total_1*10+number
        for number in reversed(arr_2):
            total_2 = total_2*10+number
        total= total_1+total_2
        reverse = [int(d) for d in str(total)][::-1]
        dummy = ListNode(0)
        current = dummy
        for val in reverse:
            current.next = ListNode(val)
            current = current.next
            
        return dummy.next
    
L1 = ast.literal_eval(input())
L2 = ast.literal_eval(input())

l1_node = make_linked_list(L1)
l2_node = make_linked_list(L2)

sol = Solution()
result= sol.addTwoNumbers(l1_node, l2_node)

final_output = []
while result:
    final_output.append(result.val)
    result = result.next

print("[" + ",".join(map(str,final_output)) + "]")