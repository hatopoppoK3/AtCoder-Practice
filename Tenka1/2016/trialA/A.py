print(sum([i for i in range(1, 101) if (i % 3)]) -
      sum([i for i in range(1, 101) if not(i % 5)]) +
      sum([i for i in range(1, 101) if not(i % 15)]))
