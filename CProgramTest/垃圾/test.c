#include <windows.h>

int WINAPI WinMain (HINSTANCE hInstance,
                    HINSTANCE hPrevInstance,
                    PSTR szCmdLine,
                    int iCmdShow)
{

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

/*
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
