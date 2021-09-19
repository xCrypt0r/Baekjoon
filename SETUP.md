# 사용 방법
## 공통 설정
1. 이 리포지토리를 포크합니다.

1. 포크한 리포지토리를 클론합니다.

### 자동 리드미 업데이트

1. 리포지토리의 Settings 에서 Secrets 탭으로 이동한 후 `New repository secret` 버튼을 누르고 `Name` 부분에 `EMAIL` 을 적고 `Value` 부분에 본인의 깃허브 이메일을 적어줍니다. 같은 방식으로 `Name` 부분에 `USER` 을 적고 `Value` 부분에 본인의 깃허브 유저네임을 적어줍니다.

1. 위의 단계를 거친 후에는 커밋 메시지를 정규식 `^(Add|Delete|Update) \d+\.\w+( \| (Add|Delete|Update) \d+\.\w+)*$` 과 일치하도록 작성하여 커밋하면 자동으로 리드미가 업데이트 됩니다. 아래는 예시입니다.
    - Add 1000.cpp
    - Add 1000.cpp 1001.cpp 1002.cpp
    - Update 1000.cpp
    - Delete 1000.cpp

### 문제풀이 정보 주석으로 넣기

1. `cd comment` 를 입력하여 `comment` 폴더로 이동하고 `npm install` 을 입력하여 라이브러리들을 설치해줍니다.

1. [config.example.json](comment/config.example.json) 파일의 이름을 `config.json` 으로 변경하고 `BAEKJOON_USER` 필드에 본인의 백준 아이디를 적습니다.

1. `node main.js 1000.cpp` 와 같이 입력하면 해당 문제에 자동으로 주석이 추가됩니다. (**comment 폴더로 이동한 후에 입력해야 정상적으로 작동합니다.**)