def main():
    h1, m1, s1 = map(int, input().split(':'))
    h2, m2, s2 = map(int, input().split(':'))

    if s1 > s2:
        s2 += 60
        m2 -= 1
       
    if m1 > m2:
        m2 += 60
        h2 -= 1
        
    if h1 > h2:
        h2 += 24
        
    s = s2 - s1
    m = m2 - m1
    h = h2 - h1

    if s == m == h == 0:
        h = 24

    print(f'{h:02}:{m:02}:{s:02}')

if __name__ == '__main__':
    main()
