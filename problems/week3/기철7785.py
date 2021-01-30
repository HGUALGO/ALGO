### BOJ 1064

- 내가 이해한 문제내용
	- if enter :
      add
    if leave : 
      remove


- 접근방식
	- set을 이용해서 시간 단축(다르게 푸는 방식은 모름)


- 어려웠던 점
	- sort가 잘 안됐었는데 해결
	

- 복잡도
	- O(n) (set = O(1))
  
  
  
``` python
import sys 

n = int(input())

employees = set()
for i in range(n):
    name, status = sys.stdin.readline().split()
    if status == 'enter':
        employees.add(name)
    elif status == 'leave':
        employees.remove(name)


list_employees = list(employees)
list_employees.sort(reverse=True)

print('\n'.join(list_employees))
```
