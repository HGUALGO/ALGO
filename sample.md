### BOJ 15732

- 내가 이해한 문제내용
	- 주어진 규칙들에 따라서 도토리를 상자에 담을때 마지막 도토리가 들어있는 상자의 번호를 출력


- 접근방식
	- 이분탐색 => 처음 접근을 어떻게 해야할지 잘 몰랐음


- 어려웠던 점
	- 기준점(중간점)을 잡았을 때 어떤 식으로 이분탐색을 시작해야 할지 헤멤
	- 참고 코드를 보면서 그림으로 이해함


- 복잡도
	- 시간복잡도: 이분탐색 + for문 => O(KlogN)
	
	
- 풀이참고
	- https://kswims.tistory.com/146
	- 처음에 배열로 해봤으나 식을 못만들었어서 참고한 코드를 따라가며 이해하였다. 푼 후에 맞은 사람들의 코드를 참고하여 배열로도 풀어봄 => 근데 틀렸다.. 코드를 돌리면 답은 나왔는데..? 일단 함께 제출!
  
  
  
  ``` cpp
#include <cstdio>
#include <vector>
using namespace std;

typedef struct{
    int a, b, c;
} box;

int main(){
    int n, k, d;
    long long mid, cnt, high, low;
    box in;
    vector<box> doto;
    scanf("%d %d %d", &n, &k, &d);

    for(int i = 0; i < k; i++){
        scanf("%d %d %d", &in.a, &in.b, &in.c);
        doto.push_back(in);
    }
    high = n;
    low = 1;
    while(low + 1 < high){
        mid = (high+low)/2;
        cnt = 0;
        for(int i = 0; i < doto.size(); i++){
            if(doto[i].b < mid){
                cnt += (doto[i].b - doto[i].a)/doto[i].c + 1;
            } 
            else if(doto[i].a > mid){
                continue;
            }
            else if(doto[i].a == mid){
                cnt += 1;
            }
            else {
                cnt += (mid - doto[i].a)/doto[i].c + 1; //   mid 와 doto[i].b가 같을경우 
            }
        }
        if(cnt >= d){
            high = mid;
        }
        else{
            low = mid;
        }
    }
    printf("%lld", high);
    return 0;
}
/*#include <cstdio>
#include <algorithm>
#define max 10000
using namespace std;

int main(){
    int n, k, d, a[max], b[max], c[max];
    scanf("%d %d %d", &n, &k, &d);
    for(int i = 0; i < k; i++){
        scanf("%d %d %d", a+i, b+i, c+i);
    }
    int cnt, low, high, mid;
    low = 1;
    high = n;
    while(low+1 < high){
        mid = (low + high) / 2;
        cnt = 0;
        for(int i = 0; i < k; i++){
            int temp = min(b[i], mid);
            if(temp >= a[i])
                cnt += (temp - a[i]) / c[i] + 1;
        }
        (cnt >= d ? high : low) = mid;
    }
    printf("%d", high);
    return 0;
}*/


```

### Reference 
- https://github.com/gitcheol/Problem-Solving/edit/master/problems/Binary%20Search/BOJ%2015732/%EB%B0%95%ED%95%98%EC%9C%A4.cpp

