#include <stdio.h>
#include <stdlib.h>

#include <conio.h>
#include <windows.h>
 
typedef enum
{
	fBlack = 0,
	fRed1 = FOREGROUND_RED | FOREGROUND_INTENSITY,     // 红色
	fRed = FOREGROUND_RED,     // 红色
	fGreen = FOREGROUND_GREEN, // 绿色
	fBlue = FOREGROUND_BLUE,   // 蓝色
	fYellow = FOREGROUND_RED | FOREGROUND_GREEN, // 黄色
	fMegente = FOREGROUND_RED | FOREGROUND_BLUE, // 洋红
	fCyan = FOREGROUND_GREEN | FOREGROUND_BLUE,  // 青色
	fWhite = FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN,
	bRed = BACKGROUND_RED,
	bGreen = BACKGROUND_GREEN,
	bBlue = BACKGROUND_BLUE,
	bYellow = BACKGROUND_RED | BACKGROUND_GREEN,
	bWhite = BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN,
    
} CONSOLE_COLOR;
 
void SetConsoleTextColor(CONSOLE_COLOR color1,CONSOLE_COLOR color2)
{
    int color = color1 | color2;
	static HANDLE console = NULL;
	if (console == NULL) console = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(console, color);
}

void SetConsoleTextColor(CONSOLE_COLOR color){
    static HANDLE console = NULL;
	if (console == NULL) console = GetStdHandle(STD_OUTPUT_HANDLE); 
	SetConsoleTextAttribute(console, color);
}

void SetConsoleTextColor(int color){
    static HANDLE console = NULL;
	if (console == NULL) console = GetStdHandle(STD_OUTPUT_HANDLE); 
	SetConsoleTextAttribute(console, color);
}

void SetConsoleTextColor(){
    HANDLE handle;
	WORD wOldColorAttrs;
	CONSOLE_SCREEN_BUFFER_INFO csbiInfo;
	handle = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(handle, &csbiInfo);
	wOldColorAttrs = csbiInfo.wAttributes;
	SetConsoleTextAttribute(handle, FOREGROUND_GREEN |    
		                            FOREGROUND_INTENSITY);
	puts("yes你好世界!");
 
	/*SetConsoleTextAttribute(handle, FOREGROUND_RED |
									FOREGROUND_GREEN |
									FOREGROUND_BLUE);*/
	SetConsoleTextAttribute(handle, fWhite);
	printf("%d",wOldColorAttrs);
	puts("yes你好世界!");

}
 int main(){
     // system("chcp 65001");
     //system("cls");
 	SetConsoleTextColor();
     // SetConsoleTextColor(fRed , bBlue);
     printf("你好 哈哈 世界 !    \n");
 	// SetConsoleTextColor(COMMON_LVB_GRID_RVERTICAL | fRed1);
     printf("!你好 ! 世界 ! \n");
     printf("hello ! world   ! \n");
    
     system("pause");
     return 0;
 }



/*
#include <windows.h>

int WINAPI WinMain (HINSTANCE hInstance,
                    HINSTANCE hPrevInstance,
                    PSTR szCmdLine,
                    int iCmdShow)
{
	system("chcp 65001");
    system("cls");
    // MessageBox (NULL, TEXT("Hello 你妹妹的"), TEXT("Title"),MB_OK);
    // MessageBox (NULL, TEXT("Hello 你妹妹的"), TEXT("Title"),MB_YESNO);
    int res = MessageBox (NULL, TEXT("你是好人么?"), TEXT("询问"),MB_YESNO|MB_ICONQUESTION);

    if(IDYES == res){
        MessageBox (NULL, TEXT("一看你就不是好人,点击【确定】开始格式化C盘!"), TEXT("鄙视你"),MB_OK|MB_ICONHAND);
    }else{
        int r1 = MessageBox (NULL, TEXT("尝试把你变成一个好人失败，是否重试？"), TEXT("挽救你"),MB_RETRYCANCEL|MB_ICONQUESTION);
    }
    return 0;
}


    设置对话框选项
    MB_OK                     0x00000000L
    MB_OKCANCEL               0x00000001L
    MB_ABORTRETRYIGNORE       0x00000002L
    MB_YESNOCANCEL            0x00000003L
    MB_YESNO                  0x00000004L
    MB_RETRYCANCEL            0x00000005L

    设置对话框显示的图标
    MB_ICONHAND               0x00000010L
    MB_ICONQUESTION           0x00000020L
    MB_ICONEXCLAMATION        0x00000030L
    MB_ICONASTERISK           0x00000040L

    窗口点击后返回值
    IDOK                       1
    IDCANCEL                   2
    IDABORT                    3
    IDRETRY                    4
    IDIGNORE                   5
    IDYES                      6
    IDNO                       7

*/

/*
#define BACKGROUND_INTENSITY 0x80
#define COMMON_LVB_LEADING_BYTE 0x100
#define COMMON_LVB_TRAILING_BYTE 0x200
#define COMMON_LVB_GRID_HORIZONTAL 0x400  顶部水平线
#define COMMON_LVB_GRID_LVERTICAL 0x800
#define COMMON_LVB_GRID_RVERTICAL 0x1000
#define COMMON_LVB_REVERSE_VIDEO 0x4000
#define COMMON_LVB_UNDERSCORE 0x8000

#define COMMON_LVB_SBCSDBCS 0x300
*/