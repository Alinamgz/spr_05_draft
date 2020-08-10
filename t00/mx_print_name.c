void mx_printchar(char c);
void mx_printstr(const char *s);
void mx_printint(int n);

// check if const char is ok here
void mx_print_name(const char *p_name, int arg_cnt) {

	mx_printstr(p_name);
	mx_printchar('\n');
	mx_printint(arg_cnt);
	mx_printchar('\n');

	return;
}

int main( int argc, char *argv[]) {

	mx_print_name( argv[0], argc);
	return 0;
}

