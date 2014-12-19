fib :: Int -> Int -> [Int]
fib x y = x : fib y (x+y)

main = print $ sum $ takeWhile (< 4000000) $ filter even $ fib 0 1
