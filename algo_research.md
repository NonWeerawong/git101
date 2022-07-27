# C++ code
## binary search
```
int left = 0, right = array_size - 1;
while (left <= right) {
  int mid = (left + right) / 2;
  if (a[mid] == target)
    return mid;
  else if (a[mid] > target)
    right = mid - 1;
  else
    left = mid + 1;
}
return -1 // not found
```
