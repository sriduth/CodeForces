perm_length, factor = list(map(lambda x : int(x), input().split(" ")))
a = ' '.join(map(lambda x : str(x), list(reversed(range(perm_length - factor + 1, perm_length+1)))))
b = ' '.join(map(lambda x : str(x), list(range(1, perm_length - factor + 1))))
print(a+' '+b)