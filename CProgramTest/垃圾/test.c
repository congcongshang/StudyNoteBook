#include <windows.h>

int WINAPI WinMain (HINSTANCE hInstance,
                    HINSTANCE hPrevInstance,
                    PSTR szCmdLine,
                    int iCmdShow)
{

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

/*
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
