#include <stdio.h>
#include <stdlib.h>

#include <conio.h>
#include <windows.h>
 
typedef enum
{
	fBlack = 0,
	fRed1 = FOREGROUND_RED | FOREGROUND_INTENSITY,     // ��ɫ
	fRed = FOREGROUND_RED,     // ��ɫ
	fGreen = FOREGROUND_GREEN, // ��ɫ
	fBlue = FOREGROUND_BLUE,   // ��ɫ
	fYellow = FOREGROUND_RED | FOREGROUND_GREEN, // ��ɫ
	fMegente = FOREGROUND_RED | FOREGROUND_BLUE, // ���
	fCyan = FOREGROUND_GREEN | FOREGROUND_BLUE,  // ��ɫ
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
	puts("yes�������!");
 
	/*SetConsoleTextAttribute(handle, FOREGROUND_RED |
									FOREGROUND_GREEN |
									FOREGROUND_BLUE);*/
	SetConsoleTextAttribute(handle, fWhite);
	printf("%d",wOldColorAttrs);
	puts("yes�������!");

}
 int main(){
     // system("chcp 65001");
     //system("cls");
 	SetConsoleTextColor();
     // SetConsoleTextColor(fRed , bBlue);
     printf("��� ���� ���� !    \n");
 	// SetConsoleTextColor(COMMON_LVB_GRID_RVERTICAL | fRed1);
     printf("!��� ! ���� ! \n");
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
    // MessageBox (NULL, TEXT("Hello �����õ�"), TEXT("Title"),MB_OK);
    // MessageBox (NULL, TEXT("Hello �����õ�"), TEXT("Title"),MB_YESNO);
    int res = MessageBox (NULL, TEXT("���Ǻ���ô?"), TEXT("ѯ��"),MB_YESNO|MB_ICONQUESTION);

    if(IDYES == res){
        MessageBox (NULL, TEXT("һ����Ͳ��Ǻ���,�����ȷ������ʼ��ʽ��C��!"), TEXT("������"),MB_OK|MB_ICONHAND);
    }else{
        int r1 = MessageBox (NULL, TEXT("���԰�����һ������ʧ�ܣ��Ƿ����ԣ�"), TEXT("�����"),MB_RETRYCANCEL|MB_ICONQUESTION);
    }
    return 0;
}


    ���öԻ���ѡ��
    MB_OK                     0x00000000L
    MB_OKCANCEL               0x00000001L
    MB_ABORTRETRYIGNORE       0x00000002L
    MB_YESNOCANCEL            0x00000003L
    MB_YESNO                  0x00000004L
    MB_RETRYCANCEL            0x00000005L

    ���öԻ�����ʾ��ͼ��
    MB_ICONHAND               0x00000010L
    MB_ICONQUESTION           0x00000020L
    MB_ICONEXCLAMATION        0x00000030L
    MB_ICONASTERISK           0x00000040L

    ���ڵ���󷵻�ֵ
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
#define COMMON_LVB_GRID_HORIZONTAL 0x400  ����ˮƽ��
#define COMMON_LVB_GRID_LVERTICAL 0x800
#define COMMON_LVB_GRID_RVERTICAL 0x1000
#define COMMON_LVB_REVERSE_VIDEO 0x4000
#define COMMON_LVB_UNDERSCORE 0x8000

#define COMMON_LVB_SBCSDBCS 0x300
*/