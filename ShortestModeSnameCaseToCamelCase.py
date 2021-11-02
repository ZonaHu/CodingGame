a=[word.capitalize()for word in input().split('_')]
a[0]=a[0].lower()
print("".join(a))

# Shortest Version:
# I=input
# a,*b=map(str.title,I().split("_"))
# I(a.lower()+"".join(b))
