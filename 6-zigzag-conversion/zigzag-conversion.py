class Solution:
    def convert(self, s: str, numRows: int) -> str:
        # Edge case: If there's only 1 row, or the string is shorter than the rows,
        # the pattern won't change the order at all.
        if numRows == 1 or numRows >= len(s):
            return s
        
        # Create an array of strings, one for each row
        rows = [""] * numRows
        current_row = 0
        going_down = False  # Track direction
        
        for char in s:
            rows[current_row] += char
            
            # If we are at the top or bottom row, change direction
            if current_row == 0 or current_row == numRows - 1:
                going_down = not going_down
                
            # Move up or down based on current direction
            current_row += 1 if going_down else -1
            
        # Combine all rows into a single string
        return "".join(rows)