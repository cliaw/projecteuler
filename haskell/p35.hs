import Math.NumberTheory.Powers
import Data.Numbers.Primes
import Safe

primes' :: [Int]
primes' = takeWhile (<1000000) primes

digitLength :: Int -> Int
digitLength 0 = 0
digitLength x = 1 + digitLength (x `div` 10)

-- Check if prime is circular
circular :: Int -> Bool
circular 2 = True
circular 5 = True
circular x = noEven x && noFive x && go n x
   where
      noEven 0 = True
      noEven x = x `mod` 2 /= 0 && noEven (x `div` 10)
      noFive 0 = True
      noFive x = x `mod` 5 /= 0 && noFive (x `div` 10)
      n = digitLength x
      go 0 _ = True
      go k x = x `elem` primes' && go (k-1) y
         where z = x `mod` 10
               y = x `div` 10 + z*(10^(n-1))

main = print $ length $ filter circular primes'
