Extended Euclidean Algorithm

ax + by = gcd(a, b)
gcd(a, b) = gcd(b, a%b) = b*x2+ (a%b)*y2

a%b = a-(a/b)*b

ax+by = bx2+(a-(a/b)*b)y2
      = ay2+b(x2-(a/b)y2)


x = y2
y = x2-(a/b)*y2
