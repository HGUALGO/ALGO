### BOJ 1110

- 내가 이해한 문제내용
	- input 받아라!  


- 접근방식
	- input받기


- 어려웠던 점
	- 파일 끝 처리 어떻게 해야되지,,? -> try, except구문 사용


- 복잡도
	- ??
  
  
  
``` python
while True:
    try:
        s = input()
        while 'BUG' in s:
            s = s.replace('BUG','')
        print(s)
    except:
        break
```
