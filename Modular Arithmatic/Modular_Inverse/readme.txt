Fermat’s_Little_Theorem.cpp -> if mod is prime
  inv =  a^-1 = a^(mod-2)%mod
so, result = (a*inv)%mod



Extended_Euclidean_Algorithm -> if mod is prime or non-prime(can use for both)
   a*x + m*y = gcd(a, m), where x is the modular inverse of a mod m

gcd(a, m) -> if the value is 1 then inverse exists

  (m%a)x1 + ay1 = gcd(m%a, a) 
  now, m%a = m-(m/a)*a
so, (m-(m/a)*a)*x1 + ay1 = gcd(m%a, a)

thats why -> y = a and x = y1-(m/a)*x1

if gcd == 1 them, x = (x%m+m)%m ,which is the inverse of a
 
