1. https://www.sqlite.org/download.html 에서 아래 파일 다운
![image](https://github.com/anulabgit/C-sql/assets/127391777/f5cb4de6-7200-4c43-b8c7-0cfb6f599f01)
![image](https://github.com/anulabgit/C-sql/assets/127391777/6da2c087-6b8d-4494-b3d0-241fb184efb5)

2. visual studio에 새로운 프로젝트 생성<br>
![image](https://github.com/anulabgit/C-sql/assets/127391777/8b6c6968-3afe-4127-be48-34902bc0f092)

3. C:\Cpp\Project\Project폴더 안에 sqlite3.def넣기<br>
![image](https://github.com/anulabgit/C-sql/assets/127391777/31791007-79b6-49c8-a7eb-5cc0c74e2315)

4. lib /def:sqlite3.def /machine:x64을 통해 라이브러리 생성<br>
![image](https://github.com/anulabgit/C-sql/assets/127391777/acaee3cb-cd9b-46fc-8242-22671f12ea03)

5. 헤더파일 C:\Cpp\Project\Project폴더 안에 넣기<br>
![image](https://github.com/anulabgit/C-sql/assets/127391777/8e5b97e9-1077-4b2e-911f-160d33228b79)

6. 소스코드 안에 헤더파일 및 라이브러리를 사용하기 위한 다음코드 추가<br>
#include "sqlite3.h"<br>
#pragma comment(lib, "sqlite3.lib")
