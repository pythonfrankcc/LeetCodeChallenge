class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        for char in s:
            if char in ["(", "{", "["]:
               stack.append(char)
            else:
                #the if not list checks whether the list should be empty
                #this should not be the case since it means you will start with a closing bracket
                if not stack:
                    return False
                #take the last element in the stack
                current_char = stack.pop()
                if current_char == '(':
                    if char != ")":
                        return False
                if current_char == '{':
                    if char != '}':
                        return False
                if current_char == '[':
                    if char != ']':
                        return False
                
        if stack:
            return False
        return True