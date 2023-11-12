def count_pairs_within_range(arr, a, b):
    arr.sort()
    count = 0
    left = 0
    right = len(arr) - 1

    while left < right:
        total = arr[left] + arr[right]

        if a <= total <= b:
            count += (right - left)
            print(f"{left},{right}")
            left += 1
            
        elif total < a:
            left += 1
        else:
            right -= 1

    return count

# Example usage:
arr = [16, 11, 4, 14, 7, 6, 16, 9, 17, 16, 8]
a = 11
b = 20
result = count_pairs_within_range(arr, a, b)
print("Number of pairs within the range [a, b]:", result)
