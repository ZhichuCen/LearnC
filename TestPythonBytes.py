import sys

s = "hello"
b = b"hello"

print(f"普通字符串的大小: {sys.getsizeof(s)} 字节")
print(f"字节字符串的大小: {sys.getsizeof(b)} 字节")


# import sys

b1 = b"hello"
b2 = b"h"
b3 = b""

print(f"b'hello' 占用的字节数: {sys.getsizeof(b1)}")
print(f"b'h' 占用的字节数: {sys.getsizeof(b2)}")
print(f"空字节串 b'' 占用的字节数: {sys.getsizeof(b3)}")