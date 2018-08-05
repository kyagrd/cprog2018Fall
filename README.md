## 강의노트
[![강의노트 바로가기](https://upload.wikimedia.org/wikipedia/commons/4/4a/Aviso_%22categor%C3%ADzame%22_%28espa%C3%B1ol%29.svg)](https://github.com/kyagrd/cprog2018Fall/wiki)

## 수업에 사용할 책
 * [C 기초 플러스 6판](http://www.cyber.co.kr/shop/goods/goods_view.php?goodsno=5825&category=020030060) (주교재)
     * 원서: [C Primer Plus (6th edition)](https://www.amazon.com/Primer-Plus-6th-Developers-Library/dp/0321928423)
 * [C++ 기초 플러스 6판](http://www.cyber.co.kr/shop/goods/goods_view.php?goodsno=5888&category=020030060) (부교재)
     * 원서: [C++ Primer Plus (6th edition)](https://www.amazon.com/Primer-Plus-6th-Developers-Library/dp/0321776402)

## 실습에 사용할 SW
 * [GitKraken](https://www.gitkraken.com/)
     * 분산 버전 관리 시스템(DVCS) 중에 가장 많이 쓰는 git을 사용하기 편하게 GUI로 제공하는 멀티플랫폼(리눅스, 맥, 윈도우즈 셋 다 지원)툴이다.
     * 프로그래밍 과제 등은 종이나 이메일 등으로 절대로 받지 않으며 학생 개개인의 git 저장소에 올려놓은 것을 받아가서 평가하므로 git을 사용하지 못하면 F학점이 될 수밖에 없으니 학기전에 미리 예습하거나 늦어도 학기 초반부 수강 변경/취소기간 안에 git의 기본적인 사용법을 숙달하지 못하는 일이 발생할 경우 즉시 수강을 취소하는 것을 추천.
     * 이미 다른 방식으로 git을 사용하는 데 익숙한 사람은 굳이 이 툴을 쓰지 않고 자신이 편한 방식으로 git 저장소를 관리해도 무방하다.
     * 첫 강의/실습시간에 어떤 git 온라인 저장소 서비스를 사용해서 진행할지 공지할 예정이다.
 * [Nuwen MinGW distro](https://nuwen.net/mingw.html)
     * 윈도우즈 사용자들을 위한 gcc 컴파일러 및 디버거 등을 포함한 패키지이다. (리눅스나 맥을 사용할 경우 더 자연스러운 방법으로 gcc 컴파일러를 비롯한 C/C++ 개발도구를 설치할 수 있으므로 이 항목은 윈도우즈 사용자들에만 해당)
     * 홈페이지에서 `mingw-16.0-without-git.exe` 다운로드
     * 다운로드 받은 파일을 실행하려고 하면 윈도우즈에서 경고를 할 수도 있는데 무시하고 넘어가 실행시키면 `MinGW` 디렉토리가 만들어지며 그 안에 압축이 풀린다
     * `MinGW`를 디렉토리를 `C:\` 바로 아래로 옮긴다. 즉 `C:\MinGW` 에 오도록 옮긴다.
 
 * [Code::Blocks](http://www.codeblocks.org/)
     * 멀티플랫폼(리눅스, 맥, 윈도우즈 셋 다 지원) 통합 개발 환경(IDE)으로 기본적으로 C/C++를 포함한 여러 가지 언어 및 프로그래밍 환경을 지원한다.
     * 윈도우즈 사용자의 경우 Downloads / Binary 에서 `codeblocks-17.12-setup.exe` 설치
     * Nuwen MinGW distro와 Code::Blocks 설치후 설정방법이 정리된 영문 블로그 글
         * [Install Code::Blocks and GCC 8 on Windows](https://solarianprogrammer.com/2017/11/22/install-codeblocks-gcc-windows/)
     * 에디터 글꼴 설정은 네이버의 [D2Coding](https://github.com/naver/d2codingfont) 글꼴을 추천
     * 이미 리눅스나 맥에서 C/C++ 컴파일러를 다른 방식으로 사용하는 것에 익숙한 사람은 굳이 이 통합개발환경을 사용할 필요는 없다.
     * 혹시 윈도우즈에서 Visual C/C++ 개발환경에 익숙한 사람의 경우 본인이 정말로 강력하게 원한다면 그것을 사용해서 실습해도 되지만 이 패키지에 포함된 gcc 8.1.0과 호환되지 않는 C/C++ 코드를 제출할 경우 프로그래밍 관련 점수를 받지 못하게 될 큰 위험부담을 본인이 감수하고 그로 인한 불이익에 대해서는 스스로가 책임질 각오를 단단히 한 경우에만 Visual C/C++을 사용해서 이 과목 실습을 진행하는 것도 불가능하지는 않겠지만 결코 추천하지 않는다.

