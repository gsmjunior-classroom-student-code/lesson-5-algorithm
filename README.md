# Lesson 5: algorithm
- [ ] 숫자의 팩토리얼을 구하는 프로그램
- [ ] 재귀란 무엇입니까?

## 숫자의 팩토리얼이란 무엇입니까?

재귀 프로그램:
```
입력: num = 5 
출력: 
숫자 5의 팩토리얼은 120입니다. 
```

## 재귀란 무엇입니까? 

```
# 2

# 어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.
# "재귀함수가 뭔가요?"
# "잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.
# 마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.
# 그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어."
# ____"재귀함수가 뭔가요?"
# ____"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.
# ____마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.
# ____그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어."
# ________"재귀함수가 뭔가요?"
# ________"재귀함수는 자기 자신을 호출하는 함수라네"
# ________라고 답변하였지.
# ____라고 답변하였지.
# 라고 답변하였지.

# 4

# 어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.
# "재귀함수가 뭔가요?"
# "잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.
# 마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.
# 그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어."
# ____"재귀함수가 뭔가요?"
# ____"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.
# ____마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.
# ____그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어."
# ________"재귀함수가 뭔가요?"
# ________"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.
# ________마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.
# ________그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어."
# ____________"재귀함수가 뭔가요?"
# ____________"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.
# ____________마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.
# ____________그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어."
# ________________"재귀함수가 뭔가요?"
# ________________"재귀함수는 자기 자신을 호출하는 함수라네"
# ________________라고 답변하였지.
# ____________라고 답변하였지.
# ________라고 답변하였지.
# ____라고 답변하였지.
# 라고 답변하였지.
```