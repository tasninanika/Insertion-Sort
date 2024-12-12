﻿# Insertion-Sort Algorithm

**Step 1:** Start.  

**Step 2:** Declare an integer variable `n`.  

**Step 3:** Print a message: "Enter array size".  

**Step 4:** Read the value of `n`.  

**Step 5:** Declare an integer array `arr` of size `n`.  

**Step 6:** Print a message: "Enter array elements".  

**Step 7:** Use a loop to read `n` elements into the array:
   - For `i = 0` to `n-1`, read `arr[i]`.  

**Step 8:** Print the array elements using a loop:
   - For `i = 0` to `n-1`, print `arr[i]`.  

**Step 9:** Initialize variables `temp` and `j` for sorting.  

**Step 10:** Perform insertion sort:
   - For `i = 0` to `n-1`:
     - Assign `arr[i]` to `temp`.
     - Set `j = i-1`.
     - While `temp <= arr[j]` and `j >= 0`:
       - Assign `arr[j]` to `arr[j+1]`.
       - Decrement `j` by 1.
     - Assign `temp` to `arr[j+1]`.

**Step 11:** Print the sorted array elements using a loop:
   - For `i = 0` to `n-1`, print `arr[i]`.  

**Step 12:** End.
