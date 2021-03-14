chapter01 - 개발환경 구축 및 gcc compile
===

개발환경 구축
---
window 기반으로 gcc compiler를 돌리기 위해 MinGW를 깔아보려다가 차라리 이번 기회에 wsl으로 window 환경에서 ubuntu를 써보기로 했다.      
~~어째 더 귀찮은 길을 선택한 것 같다...그래도 왜 우분투를 쓰는지 알 것 같기는 하다.~~     

wsl과 vscode를 연결하는 데는 vscode 확장 프로그램 [Remote-wsl](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-wsl)을 사용했다.   

혹은 wsl의 원하는 디렉토리에서 code . 명령어로 바로 vscode를 실행시킬 수 있다.   


gcc compiler
---
터미널에서 apt install gcc 로 wsl에 gcc 설치 후, vscode로 작업!    


추가로..    
visual studio 에서는 MSVC 라고 독자적인 컴파일러를 쓰며, 무거운 studio 없이 컴파일러(cl.exe)만 따로 받을 수도 있는 모양이다.    

gpg key 추가   
---
오류 발생   
```
error: gpg failed to sign the data
fatal: failed to write commit object
```


```shell
apt install gnupg2

export GPG_TTY=$(tty)
```
이를 사용해서 해결 .. [참고](https://www.44bits.io/ko/post/add-signing-key-to-git-commit-by-gpg#%EC%95%94%ED%98%B8%EB%A5%BC-%EB%AC%BB%EB%8A%94-%ED%99%94%EB%A9%B4%EC%9D%B4-%EB%82%98%ED%83%80%EB%82%98%EC%A7%80-%EC%95%8A%EA%B3%A0-sign-failed%EA%B0%80-%EB%B0%9C%EC%83%9D%ED%95%9C%EB%8B%A4%EB%A9%B4)    
gpg 키에 암호가 걸려 있을 때 환경변수 GPG_TTY를 지정해 주지 않아 생기는 문제!   


오류 발생 2   

git push 불가 문제...    
```js
Missing or invalid credentials.
Error: socket hang up
    at connResetException (internal/errors.js:559:14)
    at Socket.socketOnEnd (_http_client.js:433:23)
    at Socket.emit (events.js:208:15)
    at endReadableNT (_stream_readable.js:1168:12)
    at processTicksAndRejections (internal/process/task_queues.js:77:11) {
  code: 'ECONNRESET'
}
```

vscode 환경설정에서 git : terminalAuthentication 옵션 선택 취소 하면 git push 할 때마다 github 아이디 비번 입력으로 push 가능?!?!    
[참고1](https://stackoverflow.com/questions/62697845/git-push-origin-master-missing-or-invalid-credentials)
[참고2](https://stackoverflow.com/questions/62860280/git-push-missing-or-invalid-credentials-fatal-authentication-failed-for-http/65252723#65252723)