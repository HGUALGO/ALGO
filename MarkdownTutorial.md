---
title: Markdown tutorial
categories: [dev]
comments: true
---

MarkDown작성법
===============
# 1. Git과 마크다운에 관하여
## 1.1. Github란?
Github란 다른 사람들과 협업할 때, 편하게 하려고 만들어진 버젼관리를 위한 소프트웨어 프로그램입니다. But 저희는 이 Github를 블로그처럼 글을 쓰고,저장하는
Community로 사용하려고 합니다.

## 1.2. 마크다운이란?
마크다운은 .md(MarkDown) 확장자를 가진 파일을 말합니다. HTML로 변환이 가능하다고 얘기하는데, 우리는 .md파일을 이용해서 슬기짜기 Github에서 우리들이 동아리활동한 내용들을 기록하고자 합니다. 기본적인 사용법은 매우 쉽고 단순하므로, 누구나 할 수 있습니다. 각 폴더에는 README.md파일이 있을텐데, 이 파일은 md파일을 들어가지 않더라도 폴더에서 대표로 보이는 md파일이 되도록 해준답니다.
마크다운 파일을 만드는건 확장자에 .md만 붙여주시면 됩니다. 그리고 파일을 만드는건 Create new File 버튼 눌러서 작성하시면 됩니다.   
그럼 시작하겠습니다.  
  
# 2. 마크다운 사용법 
우리가 자주 사용하는 문법들을 위주로 작성하겠습니다. 
시작하기 전 제가 만들어놓은 회색박스는 마크다운에서 주석에 해당됩니다. 
다음과 같습니다.  
\`\`\`  
내용  
\`\`\`  
* 위 내용을 Ctrl+c -> Ctrl+v를 해보면 다음과 같습니다.

```
내용
```  
한 줄 주석은 
\`을 사용하면 됩니다.  
` 내용


## 2.1. 헤더Headers
* 큰제목과 작은제목 : 각 문서(md)는 하나의 큰 제목(문서 제목)과 하나의 작은 제목(문서 부제목)을 가질 수 있습니다.
```
큰 제목
======================    

작은 제목
----------------------
```

* 실제로 위의 Line을 위 회색박스의 내용을 그대로 Ctrl+c -> Ctrl+v를 해보면 다음과 같습니다.

큰 제목
======================    

작은 제목
----------------------

* 글머리 : 글머리는 총 1~6까지 있습니다. 
```
# This is a H1
## This is a H2
### This is a H3
#### This is a H4
##### This is a H5
###### This is a H6
```
* 실제로 위의 Line을 위 회색박스의 내용을 그대로 Ctrl+c -> Ctrl+v를 해보면 다음과 같습니다.

# This is a H1
## This is a H2
### This is a H3
#### This is a H4
##### This is a H5
###### This is a H6

## 2.2. BlockQuote
이메일에서 사용하는 ```>``` 블럭인용문자를 이용합니다.
```
> This is a first blockqute.
>	> This is a second blockqute.
>	>	> This is a third blockqute.
```
* 실제로 위의 Line을 위 회색박스의 내용을 그대로 Ctrl+c -> Ctrl+v를 해보면 다음과 같습니다.(다음 부터는 이 주석을 달지 않지만 동일합니다!)
> This is a first blockqute.
>	> This is a second blockqute.
>	>	> This is a third blockqute.

이 안에서는 다른 마크다운 요소를 포함할 수 있습니다.
> ### This is a H3
> * List
>	```
>	code
>	```

## 2.3. 목록
### ● 순서있는 목록(번호)
순서있는 목록은 숫자와 점을 사용한다.
```
1. 첫번째
2. 두번째
3. 세번째
```
1. 첫번째
2. 두번째
3. 세번째


## 2.4. 코드
4개의 공백 또는 하나의 탭으로 들여쓰기를 만나면 변환되기 시작하여 들여쓰지 않은 행을 만날때까지 변환이 계속된다.

### 2.4.1. 들여쓰기
```
This is a normal paragraph:

    This is a code block.
    
end code block.
```

실제로 적용해보면,

적용예:

*****
This is a normal paragraph:

    This is a code block.

end code block.
*****

> 한줄 띄어쓰지 않으면 인식이 제대로 안되는 문제가 발생합니다.

```
This is a normal paragraph:
    This is a code block.
end code block.
```

적용예:

*****
This is a normal paragraph:
    This is a code block.
end code block.
*****


## 2.5 링크

```
사용문법: [Title](link)
적용예: [Google](https://google.com)
```
Link: [Google](https://google.com)

## 2.6. 강조
```
*single asterisks*
_single underscores_
**double asterisks**
__double underscores__
~~cancelline~~
```

* *single asterisks*
* _single underscores_
* **double asterisks**
* __double underscores__
* ~~cancelline~~

> ```문장 중간에 사용할 경우에는 **띄어쓰기** 를 사용하는 것이 좋습니다.```   
> 문장 중간에 사용할 경우에는 띄어쓰기를 사용하는 것이 좋습니다.

## 2.7. 이미지
```
![Alt text](/assets/img.jpg)
![Alt text](/assets/img.jpg "Optional title")
```
![슬기짜기 로고2](/assets/img/slegizzagi_proejct_logo_2.png)
![슬기짜기 로고3](/assets/img/slegizzagi_proejct_logo_3.png)

사이즈 조절 기능은 마크다운언어에는 없기 때문에 ```<img width="" height=""></img>```를 이용합니다.   밑의 내용은 HTML내용인데, 마크다운에서는 HTML언어로 작성해도 실행됩니다.

예
```
<img src="/path/to/img.jpg" width="200px" height="200px" title="px(픽셀) 크기 설정" alt="RubberDuck"></img><br/>
<img src="/path/to/img.jpg" width="20%" height="15%" title="px(픽셀) 크기 설정" alt="RubberDuck"></img>
```

<img src=/assets/img/slegizzagi_proejct_logo_2.png width="200px" height="200px" title="px(픽셀) 크기 설정" alt="RubberDuck"></img><br/>
<img src=/assets/img/slegizzagi_proejct_logo_3.png width="20%" height="15%" title="%(비율) 크기 설정" alt="RubberDuck"></img>


## 2.9. 줄바꿈
3칸 이상 띄어쓰기(` `)를 하면 줄이 바뀝니다.

```
* 줄 바꿈을 하기 위해서는 문장 마지막에서 3칸이상을 띄어쓰기해야 합니다. 
이렇게

* 줄 바꿈을 하기 위해서는 문장 마지막에서 3칸이상을 띄어쓰기해야 합니다.___\\ 띄어쓰기
이렇게
```

* 줄 바꿈을 하기 위해서는 문장 마지막에서 3칸이상을 띄어쓰기해야 합니다. 이렇게

* 줄 바꿈을 하기 위해서는 문장 마지막에서 3칸이상을 띄어쓰기해야 다.    \
이렇게


****




# 3. 정리
위의 내용들이면 충분히 원하는 글들을 충분히 작성할 수 있으리라 생각합니다.   
학기가 바쁘고, 힘들지라도 다같이 파이팅!!!
***Fail big Never give up and then Learn from it***

# 4. Tip
.md파일을 클릭해서 들어가보면 오른쪽 상단에 Raw라고 적혀있는 네모박스를 클릭해서 해당 .md파일의 Original Source Code를 볼 수 있습니다. 



## ○ 참고문서
* [78 Tools for writing and previewing Markdown](http://mashable.com/2013/06/24/markdown-tools/)
* [John gruber 마크다운 번역](http://nolboo.github.io/blog/2013/09/07/john-gruber-markdown/)
* [깃허브 취향의 마크다운 번역](http://nolboo.github.io/blog/2014/03/25/github-flavored-markdown/)
* [허니몬의 마크다운 작성법](http://www.slideshare.net/ihoneymon/ss-40575068)
* [마크다운 사용법](https://gist.github.com/ihoneymon/652be052a0727ad59601)
* Notion.so(<https://www.notion.so/product>)
* Atom(<https://atom.io/>)
* Visual Studio Code(<https://code.visualstudio.com/>)
* Notepad++(<https://notepad-plus-plus.org/>)


