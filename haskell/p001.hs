main = print $ sum s
   where p x = x `mod` 3 == 0 || x `mod` 5 == 0
         s = filter p [1..999]
