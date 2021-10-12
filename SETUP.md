## 사용 방법
### 공통 설정
---
1. 이 리포지토리를 포크합니다.

1. 포크한 리포지토리를 클론합니다.

### 자동 리드미 업데이트
---

1. [src](src) 폴더를 비워 기존의 문제풀이 파일들을 제거합니다. 삭제한 내역을 깃허브에 커밋합니다.

1. [solved.json](action/solved.json) 파일의 문제풀이 현황을 제거합니다. `[]` 만 남기고 깃허브에 업로드합니다.

1. 리포지토리의 `Settings` 에서 `Secrets` 탭으로 이동한 후 `New repository secret` 버튼을 누르고 아래의 항목들을 추가합니다.
    |**Name**|**Value**|
    |:---:|:----------:|
    |USER|깃허브 유저네임|
    |EMAIL|깃허브 이메일|

1. 위의 단계를 거친 후에는 커밋 메시지를 정규식 `^(Add|Delete|Update) \d+\.\w+( \| (Add|Delete|Update) \d+\.\w+)*$` 과 일치하도록 작성하여 커밋하면 자동으로 리드미가 업데이트 됩니다. 아래는 예시입니다.
    - Add 1000.cpp
    - Add 1000.cpp | Add 1001.cpp | Add 1002.cpp
    - Update 1000.cpp
    - Delete 1000.cpp

### 문제풀이 정보 주석 삽입
---

1. `cd comment` 를 입력하여 `comment` 폴더로 이동하고 `npm install` 을 입력하여 라이브러리들을 설치해줍니다.

1. [config.example.json](comment/config.example.json) 파일을 복사한 후 사본의 이름을 `config.json` 으로 변경하고 `BAEKJOON_USER` 필드에 본인의 백준 아이디를 적습니다.
    ```
    {
        "BAEKJOON_USER": "백준 아이디"
    }
    ```

1. `node main.js 1000.cpp` 와 같이 입력하면 해당 문제에 자동으로 주석이 추가됩니다.

### 문제 정보 업데이트
---

1. `cd action` 를 입력하여 `action` 폴더로 이동하고 `bash update.sh` 를 입력하여 업데이트를 진행합니다. (윈도우 환경이라면 `git bash` 에서 실행하면 정상적으로 동작합니다.)

2. 자동으로 [solved.json](action/solved.json) 의 문제 정보(책정 난이도 등)가 업데이트되고 [README.md](README.md) 에도 반영됩니다.