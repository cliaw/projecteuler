lcmProd :: Integer -> [Integer] -> Integer
lcmProd n [] = n
lcmProd n (x:xs) = lcmProd (lcm n x) xs

n = 20
main = print $ lcmProd 1 [1..n]
