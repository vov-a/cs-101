binSearch :: [Int] -> Int -> Int -> Int -> Int
binSearch list item left right
  | left > right      = -1
  | item < list!!mid  = binSearch list item left (mid - 1)
  | list!!mid < item  = binSearch list item (mid + 1) right
  | otherwise         = mid
   where mid = (left + right) `div` 2