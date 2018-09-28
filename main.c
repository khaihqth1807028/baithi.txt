#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct name {
    char mathisinh[5];
    int sodienthoai;
    char tenthisinh[20];
    char username;
} sokhao;

//typedef struct { ;
//    char cuocthigi[20];
//    int sotienthuong;
//    char noitochuc[20];
//sokhao sokhao1;
//}chuongtrinh
//;
int main() {
    FILE *fp = fopen("danhsachsinhvien.txt", "wt");

    struct name kkk;
    int i;
    int a;
    while (1 == 1) {
        printf("------------------------menu----------------------------\n");
        printf("vui lòng lựa chọn :\n 1.nhập thông tin sinh viên \n,2.hiển thị danh sách sinh viên\n,3.lưu danh sách ra file\n,4. đọc danh sách file\n,5.thoát chương trình\n");
        scanf("%d", &a);
        switch (a) {
            case 1 : {
                printf("bạn chonj nhập thông tin sinh viên\n ");
                for (int i = 1; i < 3; ++i) {
                    printf("nhập mã thí sinh thứ %d\n", i);
                    scanf("%s", &kkk.mathisinh);
                    printf("vui lòng nhập số điện thoại\n");
                    scanf("%d", &kkk.sodienthoai);
                    printf("vui lòng điền tên vào đây :\n");
                    getchar();
                    gets(kkk.tenthisinh);
                    printf("tên thí sinh là %s\n", kkk.tenthisinh);
                    fclose(fp);
                }
            }

                printf("xin lỗi quý khách , danh sách đầy rồi (TỐI ĐA 10 THÍ SINH) , chúng tôi sẽ đưa bạn về menu \n");
                break;
            case 2 : {
                printf("%-10s%-20s%-10s%-20s%-10s%-20s", "", "Mã sinh viên", "|", "Tên sinh viên", "|",
                       "Điện thoại\n");
                break;
            }
            case 3: {

            }

            case 5: {
//                printf("nhập 1 kí tự để thoát chương trình ");
//                scanf("%s",&kkk.username);
                if (strcmp(kkk.username, "\n") == 0) {
                    break;
                }

            }
        }
    }
    return 0;
}

