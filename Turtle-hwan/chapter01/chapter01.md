chapter01 - 개발환경 구축 및 gcc compile
===

개발환경 구축
---
window 기반으로 gcc compiler를 돌리기 위해 MinGW를 깔아보려다가 차라리 이번 기회에 wsl으로 window 환경에서 ubuntu를 써보기로 했다.      
~~어째 더 귀찮은 길을 선택한 것 같다...그래도 왜 우분투를 쓰는지 알 것 같기도 하고.~~     

wsl과 vscode를 연결하는 데는 vscode 확장 프로그램 [Remote-wsl](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-wsl) 사용했다.   

혹은 wsl의 원하는 디렉토리에서 code . 명령어로 바로 vscode를 실행시킬 수 있다.   


gcc compiler
---
터미널에서 apt install gcc 로 wsl에 gcc 설치 후, vscode로 작업!    


추가로..    
visual studio 에서는 MSVC 라고 독자적인 컴파일러를 쓰며, 무거운 studio 없이 컴파일러(cl.exe)만 따로 받을 수도 있는 모양이다.    

gpg key 추가   