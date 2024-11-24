/*

#include <stdio.h>
int main()
{
    char string[1000]="\0";
    fflush(stdin);
    for (int  i = 0; i < 1000; i++)
    {
        string[i]=getchar();
        if (string[i]==' ')
        {
            string[i]='\0';
        }
        if(string[i]=='\n'){
            string[i]='\0';
            break;
        }
    }

    int ansstartindex=0,ansendindex=0,length=0,anslength=0;
    for (int i = 0; i < 1000; i++){
        if(string[i]!='\0'){
            length++;
        }else{
            if (length > anslength){
                anslength = length;
                ansstartindex = i-anslength;
                ansendindex = i;
            }
            length = 0;
        }
    }

    for (int i = ansstartindex; i < ansendindex; i++){
        printf("%c",string[i]);
    }
    return 0;
}
*/





#include <stdio.h>

int main() {
	char string[1000] = "\0";
	fflush(stdin);
	for (int  i = 0; i < 1000; i++) {
		string[i] = getchar();
		if (string[i] == '\n') {
			string[i] = '\0';
			break;
		}
	}

	int ansstartindex = 0, ansendindex = 0, length = 0, anslength = 0;

	for (int i = 0; i < 1000; i++) {
		if (string[i] != ' ' || string[i] == '\0') {
			length++;
		} else {
			if (length > anslength) {
				anslength = length;
				ansstartindex = i - anslength;
				ansendindex = i;
			}
			length = 0;
		}
	}

	for (int i = ansstartindex; i < ansendindex; i++) {
		printf("%c", string[i]);
	}
	return 0;
}
