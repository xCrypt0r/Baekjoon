def main():
    fan = ':fan:'

    print(*[fan + fan + fan, fan + ':%s:' % input() + fan, fan + fan + fan], sep='\n')

if __name__ == '__main__':
    main()
